#include "Client.h"

#include <utility>

Client::Client(int c, string n) {
    this->id = c;
    this->name = std::move(n);
}

// getters
int Client::getId() const {
    return id;
}

const string &Client::getName() const {
    return name;
}

