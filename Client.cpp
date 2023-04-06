#include "Client.h"

#include <utility>

int Client::objectsCount = 0;

Client::Client(int c, string n) {
    this->id = c;
    this->name = std::move(n);

    Client::objectsCount++;
}

// getters
int Client::getId() const {
    return id;
}

const string &Client::getName() const {
    return name;
}

