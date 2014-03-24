// Copyright (c) 2009-2012 Bitcoin Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "init.h" // for pwalletMain
<<<<<<< HEAD
<<<<<<< HEAD
#include "gamingcoinrpc.h"
=======
#include "freicoinrpc.h"
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
=======
#include "freicoinrpc.h"
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
#include "ui_interface.h"
#include "base58.h"

#include <boost/lexical_cast.hpp>

#define printf OutputDebugStringF

using namespace json_spirit;
using namespace std;

class CTxDump
{
public:
    CBlockIndex *pindex;
    int64 nValue;
    bool fSpent;
    CWalletTx* ptx;
    int nOut;
    CTxDump(CWalletTx* ptx = NULL, int nOut = -1)
    {
        pindex = NULL;
        nValue = 0;
        fSpent = false;
        this->ptx = ptx;
        this->nOut = nOut;
    }
};

Value importprivkey(const Array& params, bool fHelp)
{
    if (fHelp || params.size() < 1 || params.size() > 2)
        throw runtime_error(
<<<<<<< HEAD
<<<<<<< HEAD
            "importprivkey <gamingcoinprivkey> [label]\n"
=======
            "importprivkey <freicoinprivkey> [label]\n"
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
=======
            "importprivkey <freicoinprivkey> [label]\n"
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
            "Adds a private key (as returned by dumpprivkey) to your wallet.");

    string strSecret = params[0].get_str();
    string strLabel = "";
    if (params.size() > 1)
        strLabel = params[1].get_str();
<<<<<<< HEAD
<<<<<<< HEAD
    CgamingcoinSecret vchSecret;
=======
    CFreicoinSecret vchSecret;
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
=======
    CFreicoinSecret vchSecret;
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
    bool fGood = vchSecret.SetString(strSecret);

    if (!fGood) throw JSONRPCError(RPC_INVALID_ADDRESS_OR_KEY, "Invalid private key");

    CKey key;
    bool fCompressed;
    CSecret secret = vchSecret.GetSecret(fCompressed);
    key.SetSecret(secret, fCompressed);
    CKeyID vchAddress = key.GetPubKey().GetID();
    {
        LOCK2(cs_main, pwalletMain->cs_wallet);

        pwalletMain->MarkDirty();
        pwalletMain->SetAddressBookName(vchAddress, strLabel);

        if (!pwalletMain->AddKey(key))
            throw JSONRPCError(RPC_WALLET_ERROR, "Error adding key to wallet");

        pwalletMain->ScanForWalletTransactions(pindexGenesisBlock, true);
        pwalletMain->ReacceptWalletTransactions();
    }

    return Value::null;
}

Value dumpprivkey(const Array& params, bool fHelp)
{
    if (fHelp || params.size() != 1)
        throw runtime_error(
<<<<<<< HEAD
<<<<<<< HEAD
            "dumpprivkey <gamingcoinaddress>\n"
            "Reveals the private key corresponding to <gamingcoinaddress>.");

    string strAddress = params[0].get_str();
    CgamingcoinAddress address;
    if (!address.SetString(strAddress))
        throw JSONRPCError(RPC_INVALID_ADDRESS_OR_KEY, "Invalid gamingcoin address");
=======
=======
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
            "dumpprivkey <freicoinaddress>\n"
            "Reveals the private key corresponding to <freicoinaddress>.");

    string strAddress = params[0].get_str();
    CFreicoinAddress address;
    if (!address.SetString(strAddress))
        throw JSONRPCError(RPC_INVALID_ADDRESS_OR_KEY, "Invalid Freicoin address");
<<<<<<< HEAD
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
=======
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
    CKeyID keyID;
    if (!address.GetKeyID(keyID))
        throw JSONRPCError(RPC_TYPE_ERROR, "Address does not refer to a key");
    CSecret vchSecret;
    bool fCompressed;
    if (!pwalletMain->GetSecret(keyID, vchSecret, fCompressed))
        throw JSONRPCError(RPC_WALLET_ERROR, "Private key for address " + strAddress + " is not known");
<<<<<<< HEAD
<<<<<<< HEAD
    return CgamingcoinSecret(vchSecret, fCompressed).ToString();
=======
    return CFreicoinSecret(vchSecret, fCompressed).ToString();
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
=======
    return CFreicoinSecret(vchSecret, fCompressed).ToString();
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
}
