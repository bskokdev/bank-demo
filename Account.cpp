#include "Account.h"

double Account::defaultInterestRate = 0.01;
int Account::objectsCount = 0;

Account::Account(Client* owner) {
    this->id = rand() % 1000;
    this->balance = 0;
    this->interestRate = defaultInterestRate;
    this->owner = owner;

    Account::objectsCount++; // increment the number of objects
}

Account::Account(double interestRate, Client *owner) {
    this->id = rand() % 1000;
    this->balance = 0;
    this->interestRate = interestRate;
    this->owner = owner;

    Account::objectsCount++; // increment the number of objects
}

int Account::getId() const {
    return id;
}

double Account::getBalance() const {
    return balance;
}

double Account::getInterestRate() const {
    return interestRate;
}

Client *Account::getOwner() const {
    return owner;
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