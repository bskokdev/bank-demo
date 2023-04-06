#include <iostream>
#include "Bank.h"

using namespace std;

int main() {
    Account a1(1, 0.01, new Client(1, "John"), new Client(2, "Mary"));
    cout << Account::objectsCount << endl;
    return 0;
}
