#ifndef UNTITLED_ACCOUNT_H
#define UNTITLED_ACCOUNT_H

#include <string>
#include "Client.h"

using namespace std;

class Account {
private:
    static int objectsCount;
    static double defaultInterestRate;

    int id;
    double balance;
    double interestRate;

    Client* owner;
    Client* partner;
public:
    Account(int id, Client *owner);
    Account(int id, double interestRate, Client *owner);
    Account(int id, Client *owner, Client *partner);
    Account(int id, double interestRate, Client *owner, Client *partner);

    // getters
    int getId() const;
    double getBalance() const;
    double getInterestRate() const;
    Client *getOwner() const;
    Client *getPartner() const;

    // funcs
    bool canWithdraw(double a) const;
    void deposit(double a);
    bool withdraw(double a);
    void addInterest();
};

#endif
