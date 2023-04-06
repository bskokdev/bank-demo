#ifndef UNTITLED_ACCOUNT_H
#define UNTITLED_ACCOUNT_H

#include <string>
#include "Client.h"

using namespace std;

class Account {
private:
    int id;
    double balance;
    double interestRate;
    Client* owner;
public:
    explicit Account(Client* owner); // to prevent implicit conversion
    Account(double interestRate, Client *owner);

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

    static int objectsCount;
    static double defaultInterestRate;
};

#endif
