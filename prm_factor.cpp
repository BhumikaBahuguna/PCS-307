#include <iostream>
using namespace std;

// Class A multiplies by 2
class A {
public:
    int func(int val) {
        return val * 2;
    }
};

// Class B multiplies by 3
class B {
public:
    int func(int val) {
        return val * 3;
    }
};

// Class C multiplies by 5
class C {
public:
    int func(int val) {
        return val * 5;
    }
};

// Class D will update the value by calling A, B, and C's func
class D {
private:
    int val;  // This is the value in class D
    A a;      // Object of class A
    B b;      // Object of class B
    C c;      // Object of class C

public:
    D() : val(1) {}  // Initialize val to 1

    // Function to update val
    void update_val(int new_val) {
        int temp = new_val;
        int countA = 0, countB = 0, countC = 0;

        // Count how many times 2 is a factor (A's func)
        while (temp % 2 == 0) {
            countA++;
            temp /= 2;
        }

        // Count how many times 3 is a factor (B's func)
        while (temp % 3 == 0) {
            countB++;
            temp /= 3;
        }

        // Count how many times 5 is a factor (C's func)
        while (temp % 5 == 0) {
            countC++;
            temp /= 5;
        }

        // Now we know how many times we need to call each func
        for (int i = 0; i < countA; i++) {
            val = a.func(val);
        }

        for (int i = 0; i < countB; i++) {
            val = b.func(val);
        }

        for (int i = 0; i < countC; i++) {
            val = c.func(val);
        }

        // Output the function calls count
        cout << "A's func called " << countA << " times" << endl;
        cout << "B's func called " << countB << " times" << endl;
        cout << "C's func called " << countC << " times" << endl;
    }
};

int main() {
    D d;
    int new_val;

    // Take user input for new_val
    cout << "Enter the value to update val to: ";
    cin >> new_val;  // User enters the new value
    
    // Call the update_val function to update val
    d.update_val(new_val);  
    
    return 0;
}
