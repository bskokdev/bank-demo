#ifndef UNTITLED_CLIENT_H
#define UNTITLED_CLIENT_H

#include <string>

using namespace std;

class Client {
private:
    int id;
    string name;
public:
    static int objectsCount;
    Client(int c, string n);

    // getters
    int getId() const;
    const string &getName() const;
};


#endif