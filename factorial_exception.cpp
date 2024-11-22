TO FIND FACTORIAL USING EXCEPTION HANDLING


#include <iostream>
using namespace std;
int factorial(int n) {
    if (n < 0) {
        // Throw an exception if the input is negative
        throw "Factorial is not defined for negative numbers!";
    }
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
int main() {
    int num;
    // Taking input from the user
    cout << "Enter a number to find its factorial: ";
    cin >> num;
    try {
        // Attempting to calculate factorial
        int result = factorial(num);
        cout << "The factorial of " << num << " is: " << result << endl;
    }
    catch (const char* msg) {
        // Catching the exception if any occurs
        cout << "Error: " << msg << endl;
    }
    return 0;
}
