#include "Client.h"

Client::Client(int c, string n) {
    this->id = c;
    this->name = n;
}

// getters
int Client::getId() const {
    return id;
}

const string &Client::getName() const {
    return name;
}

