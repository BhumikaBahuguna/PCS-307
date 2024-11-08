#include <iostream>
using namespace std;
int main() {
    char productType;
    int age;
    double purchaseAmount, discount = 0.0, netPayment;
    cout << "Enter product type (F for Food, C for Clothing): ";
    cin >> productType;
    cout << "Enter purchase amount: ";
    cin >> purchaseAmount;
    if (productType == 'C') {
        cout << "Enter age: ";
        cin >> age;
    }
    switch (productType) {
        case 'F':
            if (purchaseAmount >= 5000) {
                discount = 0.5 * purchaseAmount;
            } else if (purchaseAmount >= 2000) {
                discount = 0.2 * purchaseAmount;
            } else if (purchaseAmount >= 500) {
                discount = 0.1 * purchaseAmount;
            } else {
                discount = 0;
            }
            break;
        case 'C':
            if (age >= 40) {
                if (purchaseAmount >= 5000) {
                    discount = 0.5 * purchaseAmount;
                } else if (purchaseAmount >= 2000) {
                    discount = 0.2 * purchaseAmount;
                } else if (purchaseAmount >= 500) {
                    discount = 0.1 * purchaseAmount;
                } else {
                    discount = 0;
                }
            } else if (age >= 20) {
                if (purchaseAmount >= 5000) {
                    discount = 0.6 * purchaseAmount;
                } else if (purchaseAmount >= 2000) {
                    discount = 0.3 * purchaseAmount;
                } else if (purchaseAmount >= 500) {
                    discount = 0.15 * purchaseAmount;
                } else {
                    discount = 0;
                }
            } else {
                if (purchaseAmount >= 2500) {
                    discount = 0.5 * purchaseAmount;
                } else {
                    discount = 0;
                }
            }
            break;
        default:
            cout << "Invalid product type." << endl;
            return 1;
    }
    netPayment = purchaseAmount - discount;
    cout << "Product Type: " << productType<< endl;
    cout << "Purchase Amount:" << purchaseAmount << endl;
    cout << "Discount:" << discount << endl;
    cout << "Net Payment:" << netPayment << endl;

    return 0;
}











