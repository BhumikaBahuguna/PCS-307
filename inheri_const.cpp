#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class constructor" << endl;
    }

    Base(int x) {
        cout << "Base class parameterized constructor: " << x << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor" << endl;
    }

    Derived(int x) : Base(x) {  // Calling base class parameterized constructor
        cout << "Derived class parameterized constructor: " << x << endl;
    }
};

int main() {
    cout << "Creating Derived object with default constructor" << endl;
    Derived d1;  // Calls Base() -> Derived()

    cout << "\nCreating Derived object with parameterized constructor" << endl;
    Derived d2(10);  // Calls Base(int) -> Derived(int)

    return 0;
}
