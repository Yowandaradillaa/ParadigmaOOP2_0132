#include <iostream>
using namespace std;

class baseClass {
    public:
    virtual void perkenalan(){
        cout << "Hallo saya Fuction dari base class: ";
    }
};

class derivedClass : public baseClass {
    public:
    void perkenalan () {
        cout << "Hallo saya Function dari derived Class ";
    }
};

int mai () {
    derivedClass a;
    a.perkenalan();

    return 0;
}