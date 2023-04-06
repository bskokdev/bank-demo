#include "PartnerAccount.h"

PartnerAccount::PartnerAccount(Client *owner, ClientAccount *partner) : Account(owner) {
    this->partners.push_back(partner);
}
