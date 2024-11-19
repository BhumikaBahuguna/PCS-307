#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class constructor" << endl;
    }

    virtual ~Base() {  // Virtual destructor in base class
        cout << "Base class destructor" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor" << endl;
    }

    ~Derived() {  // Destructor in derived class
        cout << "Derived class destructor" << endl;
    }
};

int main() {
    cout << "Creating Derived object" << endl;
    Derived d;  // Calls Base() -> Derived()

    return 0;
}
