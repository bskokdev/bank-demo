#ifndef UNTITLED_BANK_H
#define UNTITLED_BANK_H

#include <vector>
#include "Client.h"
#include <string>
#include "Account.h"

using namespace std;

class Bank {
private:
    // we don't care about max number of clients nor accounts
    vector<Client*> clients;
    vector<Account*> accounts;

    int clientsCount;
    int accountsCount;
public:
    Bank();

    // getters
    const vector<Client *> &getClients() const;
    const vector<Account *> &getAccounts() const;
    int getClientsCount() const;
    int getAccountsCount() const;

    Client* createClient(int id, string name);
    Account* createAccount(int id, Client* c);
    Account* createAccount(int id, Client* c, double ir);
    Account* createAccount(int id, Client* c, Client* p);
    Account* createAccount(int id, Client* c, Client* p, double ir);

    void addInterest();

    ~Bank();
};

#endif