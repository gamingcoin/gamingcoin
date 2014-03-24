// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2012 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
<<<<<<< HEAD
#ifndef gamingcoin_INIT_H
#define gamingcoin_INIT_H
=======
#ifndef FREICOIN_INIT_H
#define FREICOIN_INIT_H
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149

#include "wallet.h"

extern CWallet* pwalletMain;

void StartShutdown();
void Shutdown(void* parg);
bool AppInit2();
std::string HelpMessage();

#endif
