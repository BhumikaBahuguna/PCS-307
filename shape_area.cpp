#include <iostream>
using namespace std;

// Function to calculate area of square
float calculateArea(float side) {
    return side * side;
}

// Function to calculate area of rectangle
float calculateArea(float length, float width) {
    return length * width;
}

// Function to calculate area of triangle
float calculateArea(float base, float height, bool isTriangle) {
    return 0.5 * base * height;
}

int main() {
    float side, length, width, base, height;

    // Input and calculation for square
    cout << "Enter the side of the square: ";
    cin >> side;
    cout << "Area of square: " << calculateArea(side) << endl;

    // Input and calculation for rectangle
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << calculateArea(length, width) << endl;

    // Input and calculation for triangle
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << calculateArea(base, height, true) << endl;

    return 0;
}
