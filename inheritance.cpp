#include <iostream>
using namespace std;
class Base {
private:
    int privateData; // Private member: only accessible within Base class
protected:
    int protectedData; // Protected member: accessible within Base class and derived classes
public:
    int publicData; // Public member: accessible everywhere (within Base, Derived, and main)
    // Function to set the values of data members
    void setData() {
        privateData = 1;
        protectedData = 2;
        publicData = 3;
    }

    // Function to display data
    void display() {
        cout << "Base class - privateData: " << privateData << endl;
        cout << "Base class - protectedData: " << protectedData << endl;
        cout << "Base class - publicData: " << publicData << endl;
    }
};

// Inheritance with private mode (default if no mode is specified)
class DerivedPrivate : private Base {
public:
    void setData() {
        Base::setData(); // Calling the Base class's setData method explicitly
    }

    void show() {
        // privateData cannot be accessed directly here, as it's private in Base class
        // cout << privateData << endl; // Error: privateData is private

        // protectedData can be accessed, but only within DerivedPrivate class, as it's inherited privately
        cout << "DerivedPrivate class - protectedData: " << protectedData << endl;

        // publicData can be accessed, as it's inherited privately
        cout << "DerivedPrivate class - publicData: " << publicData << endl;
    }
};

// Inheritance with protected mode
class DerivedProtected : protected Base {
public:
    void setData() {
        Base::setData(); // Calling the Base class's setData method explicitly
    }

    void show() {
        // protectedData is accessible because it is inherited as protected
        cout << "DerivedProtected class - protectedData: " << protectedData << endl;

        // publicData is also accessible, as it is inherited as protected
        cout << "DerivedProtected class - publicData: " << publicData << endl;
    }
};

// Inheritance with public mode
class DerivedPublic : public Base {
public:
    void show() {
        // protectedData is accessible, as it is inherited as protected
        cout << "DerivedPublic class - protectedData: " << protectedData << endl;

        // publicData is accessible, as it is inherited as public
        cout << "DerivedPublic class - publicData: " << publicData << endl;
    }
};

int main() {
    // Base class instance
    Base baseObj;
    baseObj.setData();  // Set values for data members in the Base class
    baseObj.display();  // Accessible here, since it's public

    cout << "\n--- DerivedPrivate class ---" << endl;
    DerivedPrivate derivedPrivateObj;
    derivedPrivateObj.setData(); // Set values for Base class members in DerivedPrivate
    // derivedPrivateObj.display(); // Not allowed, as Base class members are now private in DerivedPrivate
    derivedPrivateObj.show(); // Shows only protected and public data inherited as private

    cout << "\n--- DerivedProtected class ---" << endl;
    DerivedProtected derivedProtectedObj;
    derivedProtectedObj.setData(); // Set values for Base class members in DerivedProtected
    // derivedProtectedObj.display(); // Not allowed, as Base class members are inherited as protected
    derivedProtectedObj.show(); // Shows protected and public data inherited as protected

    cout << "\n--- DerivedPublic class ---" << endl;
    DerivedPublic derivedPublicObj;
    derivedPublicObj.setData(); // Set values for Base class members in DerivedPublic
    derivedPublicObj.show(); // Shows protected and public data inherited as public

    return 0;
}
