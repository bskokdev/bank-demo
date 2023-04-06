#ifndef UNTITLED_PARTNERACCOUNT_H
#define UNTITLED_PARTNERACCOUNT_H

#include <vector>
#include "Account.h"
#include "ClientAccount.h"

class PartnerAccount : public Account {
private:
    std::vector<ClientAccount*> partners;
public:
    PartnerAccount(Client *owner, ClientAccount *partner);
};

#endif
