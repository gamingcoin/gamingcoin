#ifndef SENDCOINSDIALOG_H
#define SENDCOINSDIALOG_H

#include "bignum.h" // for mpq

#include <QDialog>

namespace Ui {
    class SendCoinsDialog;
}
class WalletModel;
class SendCoinsEntry;
class SendCoinsRecipient;

QT_BEGIN_NAMESPACE
class QUrl;
QT_END_NAMESPACE

<<<<<<< HEAD
<<<<<<< HEAD
/** Dialog for sending gamingcoins */
=======
/** Dialog for sending freicoins */
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
=======
/** Dialog for sending freicoins */
>>>>>>> ee23e385352666a9dea1e04f2036e3c5e7155149
class SendCoinsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SendCoinsDialog(QWidget *parent = 0);
    ~SendCoinsDialog();

    void setModel(WalletModel *model);

    /** Set up the tab chain manually, as Qt messes up the tab chain by default in some cases (issue https://bugreports.qt-project.org/browse/QTBUG-10907).
     */
    QWidget *setupTabChain(QWidget *prev);

    void pasteEntry(const SendCoinsRecipient &rv);
    bool handleURI(const QString &uri);

public slots:
    void clear();
    void reject();
    void accept();
    SendCoinsEntry *addEntry();
    void updateRemoveEnabled();
    void setBalance(const mpq& balance, const mpq& unconfirmedBalance, const mpq& immatureBalance);

private:
    Ui::SendCoinsDialog *ui;
    WalletModel *model;
    bool fNewRecipientAllowed;

private slots:
    void on_sendButton_clicked();
    void removeEntry(SendCoinsEntry* entry);
    void updateDisplayUnit();
};

#endif // SENDCOINSDIALOG_H
