#include "Account.h"

Account::Account(int id, Client *owner) : id(id), owner(owner) {
    this->balance = 0;
    this->interestRate = 0.01;
    this->owner = nullptr;
    this->partner = nullptr;
}

Account::Account(int id, double interestRate, Client *owner) {
    this->id = id;
    this->balance = 0;
    this->interestRate = interestRate;
    this->owner = owner;
    this->partner = nullptr;
}

Account::Account(int id, Client *owner, Client *partner) {
    this->id = id;
    this->balance = 0;
    this->interestRate = interestRate;
    this->owner = owner;
    this->partner = partner;
}

Account::Account(int id, double interestRate, Client *owner, Client *partner) {
    this->id = id;
    this->balance = 0;
    this->interestRate = interestRate;
    this->owner = owner;
    this->partner = partner;
}

int Account::getId() const {
    return id;
}

int Account::getBalance() const {
    return balance;
}

double Account::getInterestRate() const {
    return interestRate;
}

Client *Account::getOwner() const {
    return owner;
}

Client *Account::getPartner() const {
    return partner;
}

void Account::deposit(double a) {
    this->balance += a;
}

bool Account::canWithdraw(double a) const {
    return balance > a;
}

bool Account::withdraw(double a) {
      if(!canWithdraw(a)) return false;
      this->balance -= a;
      return true;
}

void Account::addInterest() {
    this->interestRate += this->balance * this->interestRate;
}
