#ifndef UNTITLED_CLIENTACCOUNT_H
#define UNTITLED_CLIENTACCOUNT_H


#include "Account.h"
#include "PartnerAccount.h"

class ClientAccount : Account {
private:
    PartnerAccount* partner;
public:
    ClientAccount(Client *owner, PartnerAccount *partner);
    PartnerAccount *getPartner() const;
};


#endif
