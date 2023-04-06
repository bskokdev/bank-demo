#include "ClientAccount.h"

ClientAccount::ClientAccount(Client *owner, PartnerAccount *partner) : Account(owner) {
    this->partner = partner;
}

PartnerAccount *ClientAccount::getPartner() const {
    return partner;
}
