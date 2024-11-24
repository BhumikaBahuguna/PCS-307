#include<iostream>
#include<string>
using namespace std;

class ElectricityBill {
private:
    string userName;
    int unitsConsumed;
    double billAmount;

public:
    // Constructor to initialize the user's name and units consumed
    ElectricityBill(string name, int units) {
        userName = name;
        unitsConsumed = units;
        billAmount = 0.0;
    }

    // Function to calculate the electricity bill
    void calculateBill() {
        if (unitsConsumed <= 100) {
            billAmount = unitsConsumed * 0.60; // 60 P per unit for the first 100 units
        } else if (unitsConsumed <= 300) {
            billAmount = 100 * 0.60 + (unitsConsumed - 100) * 0.80; // 80 P per unit for the next 200 units
        } else {
            billAmount = 100 * 0.60 + 200 * 0.80 + (unitsConsumed - 300) * 0.90; // 90 P per unit for units beyond 300
        }

        // Apply minimum charge of Rs 50 if bill is below that
        if (billAmount < 50) {
            billAmount = 50;
        }

        // Apply 15% surcharge if total bill exceeds Rs 300
        if (billAmount > 300) {
            billAmount += billAmount * 0.15;
        }
    }

    // Function to display the user's name and the calculated bill amount
    void displayBill() {
        cout << "User: " << userName << endl;
        cout << "Units Consumed: " << unitsConsumed << endl;
        cout << "Total Bill: Rs " << billAmount << endl;
    }
};

int main() {
    string name;
    int units;

    // Read the number of users
    cout << "Enter the number of users: ";
    int n;
    cin >> n;

    // Loop to read the details for each user
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for User " << i + 1 << endl;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter units consumed: ";
        cin >> units;

        // Create an ElectricityBill object and calculate the bill
        ElectricityBill userBill(name, units);
        userBill.calculateBill();
        userBill.displayBill();  // Display the result for the user
    }

    return 0;
}
