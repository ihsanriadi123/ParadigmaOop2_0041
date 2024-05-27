#include <iostream>
using namespace std;

class bassclass {
public:
    virtual void perkenalan() final {
        cout <<  "hallo saya function dari base class";
    }
};

class derivedclass : public baseclass {
public:
    void perkenalan() {
        cout <<  "hallo saya function dari derived class";
    }
};

int main() {
    derivedclass a;
    a.perkenalan();

    return 0;
}

