#include <iostream>
#include <string> // Required for string comparison
using namespace std;

// Template function to find the greatest of two values
template <class T>
T greatest(T a, T b) {
    return (a > b ? a : b); // Return the greater of the two values
}

int main() {
    // Test cases for different data types
    cout << greatest(88, 44) << endl;               // Comparing integers
    cout << greatest(69.70, 89.11) << endl;         // Comparing floating-point numbers
    cout << greatest('q', 'b') << endl;             // Comparing characters (based on ASCII values)

    // Using C-style string literals in the function call
    // This requires handling explicitly as C-style strings are pointers and don't work well with ">" operator
    cout << greatest(string("hello"), string("helmet")) << endl; // Convert C-style strings to `std::string` for comparison

    return 0;
}
