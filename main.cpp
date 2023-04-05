#include <iostream>
#include "Bank.h"

using namespace std;

int main() {
    Bank bank;
    bank.createClient(1,"tonda");
    bank.createClient(2,"pepa");
    bank.createClient(3,"honzik");

    for(int i = 0; i <= bank.getClientsCount(); i++) {
        bank.createAccount(00000 + i, bank.getClients()[i], 0.02);
    }
    bank.addInterest();

    for(int i = 0; i <= bank.getAccountsCount(); i++) {
        cout << bank.getAccounts()[i]->getInterestRate() << "\n";
    }
    return 0;
}
