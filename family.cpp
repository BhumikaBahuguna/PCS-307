#include<iostream>
#include<string>
using namespace std;

// Forward declaration of UserTwo class (needed for friend function)
class UserTwo;

class UserOne {
private:
    string name;
    string fatherName;
    string motherName;
    string gender;

public:
    // Function to input information for UserOne
    void InputInfo() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Father's Name: ";
        getline(cin, fatherName);
        cout << "Enter Mother's Name: ";
        getline(cin, motherName);
        cout << "Enter Gender (Male/Female): ";
        getline(cin, gender);
    }

    // Friend function declaration to compare data between UserOne and UserTwo
    friend void Userchecker(UserOne u1, UserTwo u2);
};

class UserTwo {
private:
    string name;
    string fatherName;
    string motherName;
    string gender;

public:
    // Function to input information for UserTwo
    void InputInfo() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Father's Name: ";
        getline(cin, fatherName);
        cout << "Enter Mother's Name: ";
        getline(cin, motherName);
        cout << "Enter Gender (Male/Female): ";
        getline(cin, gender);
    }

    // Friend function declaration to compare data between UserOne and UserTwo
    friend void Userchecker(UserOne u1, UserTwo u2);
};

// Friend function to compare FatherName and MotherName of UserOne and UserTwo
void Userchecker(UserOne u1, UserTwo u2) {
    // Compare FatherName and MotherName of both users
    if (u1.fatherName == u2.fatherName && u1.motherName == u2.motherName) {
        cout << "Belongs to Same Family" << endl;

        // Check the gender to determine the relationship
        if (u1.gender == "Male" && u2.gender == "Male") {
            cout << "We are Brothers" << endl;
        }
        else if (u1.gender == "Female" && u2.gender == "Female") {
            cout << "We are Sisters" << endl;
        }
        else {
            cout << "We are Brother and Sister" << endl;
        }
    } else {
        cout << "Belongs to different Family" << endl;
    }
}

int main() {
    // Create objects of UserOne and UserTwo
    UserOne user1;
    UserTwo user2;

    // Input information for UserOne
    cout << "Enter details for UserOne:" << endl;
    user1.InputInfo();

    // Input information for UserTwo
    cout << "\nEnter details for UserTwo:" << endl;
    user2.InputInfo();

    // Compare data of UserOne and UserTwo using the friend function
    Userchecker(user1, user2);

    return 0;
}
