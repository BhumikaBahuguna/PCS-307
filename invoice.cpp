#include <iostream>
#include <string>
using namespace std;
class Invoice {
private:
    string partNumber;
    string partDescription;
    int quantity;
    double price_per_item;

public:
    // Constructor to initialize data members
    Invoice(string pNumber, string pDescription, int qty, double price) {
        partNumber = pNumber;
        partDescription = pDescription;
        setQuantity(qty); // Using setter to ensure valid quantity
        setPricePerItem(price); // Using setter to ensure valid price
    }

    // Setter for partNumber
    void setPartNumber(string pNumber) {
        partNumber = pNumber;
    }

    // Getter for partNumber
    string getPartNumber() {
        return partNumber;
    }

    // Setter for partDescription
    void setPartDescription(string pDescription) {
        partDescription = pDescription;
    }

    // Getter for partDescription
    string getPartDescription() {
        return partDescription;
    }

    // Setter for quantity
    void setQuantity(int qty) {
        if (qty > 0) {
            quantity = qty;
        } else {
            quantity = 0;  // If quantity is not positive, set it to 0
        }
    }

    // Getter for quantity
    int getQuantity() {
        return quantity;
    }

    // Setter for price_per_item
    void setPricePerItem(double price) {
        if (price > 0.0) {
            price_per_item = price;
        } else {
            price_per_item = 0.0;  // If price is not positive, set it to 0.0
        }
    }

    // Getter for price_per_item
    double getPricePerItem() {
        return price_per_item;
    }

    // Method to calculate the invoice amount
    double getInvoiceAmount() {
        return quantity * price_per_item;
    }
};

int main() {
    // Test the Invoice class
    string partNumber, partDescription;
    int quantity;
    double price;

    // Input data for the invoice
    cout << "Enter part number: ";
    getline(cin, partNumber);

    cout << "Enter part description: ";
    getline(cin, partDescription);

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter price per item: ";
    cin >> price;

    // Create an Invoice object
    Invoice invoice(partNumber, partDescription, quantity, price);

    // Display the invoice details
    cout << "\nInvoice Details:" << endl;
    cout << "Part Number: " << invoice.getPartNumber() << endl;
    cout << "Part Description: " << invoice.getPartDescription() << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price per Item: " << invoice.getPricePerItem() << endl;
    cout << "Invoice Amount: " << invoice.getInvoiceAmount() << endl;

    return 0;
}
