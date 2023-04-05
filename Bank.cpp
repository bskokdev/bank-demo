#include "Bank.h"

Bank::Bank() {
    this->clients = {};
    this->accounts = {};
    this->clientsCount = 0;
    this->accountsCount = 0;
}

const vector<Client *> &Bank::getClients() const {
    return clients;
}

const vector<Account *> &Bank::getAccounts() const {
    return accounts;
}

int Bank::getClientsCount() const {
    return clientsCount;
}

int Bank::getAccountsCount() const {
    return accountsCount;
}

Bank::~Bank() {
    // free memory for clients
    for(auto& client : this->clients) {
        delete client;
    }

    // free memory for accounts
    for(auto& account : this->accounts) {
        delete account;
    }
}

Client* Bank::createClient(int id, string name) {
    // if(clients.size() > maxCount) return nullptr
    auto* client = new Client(id, name);
    this->clients.push_back(client);
    this->clientsCount++;

    return client;
}

Account* Bank::createAccount(int id, Client *c) {
    auto* account = new Account(id,c);
    this->accounts.push_back(account);
    this->accountsCount++;

    return account;
}

Account* Bank::createAccount(int id, Client *c,double ir) {
    auto* account = new Account(id, ir, c);
    this->accounts.push_back(account);
    this->accountsCount++;

    return account;
}

Account* Bank::createAccount(int id, Client *c,Client *p) {
    auto* account = new Account(id,c,p);
    this->accounts.push_back(account);
    this->accountsCount++;

    return account;
}

Account* Bank::createAccount(int id, Client *c,Client *p,double ir) {
    auto* account = new Account(id,ir,c,p);
    this->accounts.push_back((account));
    this->accountsCount++;

    return account;
}

void Bank::addInterest() {
    // for each account add its interest rate
    for(auto& account : this->accounts) {
        account->addInterest();
    }
};