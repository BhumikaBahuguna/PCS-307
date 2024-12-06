#include <iostream>
#include <string>
using namespace std;
// Base Class 1: Student
class Student {
protected:
    int age;
    string name;
    string enroll_no;
    float marks;
public:
    // Method to input Student details
    void inputStudentDetails() {
        cout << "Enter Student Information:" << endl;
        cout << "Name: ";
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        cin.ignore(); // Clear newline from input buffer
        cout << "Enrollment No: ";
        getline(cin, enroll_no);
        cout << "Marks: ";
        cin >> marks;
        cin.ignore(); // Clear newline from input buffer
    }
    // Common display method
    void display() {
        cout << "Student Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Enrollment No: " << enroll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};
// Base Class 2: Faculty
class Faculty {
protected:
    string facultyName;
    string facultyCode;
    float salary;
    string deptt;
    int age; // Faculty's age
    int experience;
    char gender;
public:
    // Method to input Faculty details
    void inputFacultyDetails() {
        cout << "Enter Faculty Information:" << endl;
        cout << "Faculty Name: ";
        getline(cin, facultyName);
        cout << "Faculty Code: ";
        getline(cin, facultyCode);
        cout << "Salary: ";
        cin >> salary;
        cin.ignore(); // Clear newline from input buffer
        cout << "Department: ";
        getline(cin, deptt);
        cout << "Age: ";
        cin >> age;
        cout << "Experience (in years): ";
        cin >> experience;
        cin.ignore(); // Clear newline from input buffer
        cout << "Gender (M/F): ";
        cin >> gender;
        cin.ignore(); // Clear newline from input buffer
    }
    // Common display method
    void display() {
        cout << "Faculty Information:" << endl;
        cout << "Faculty Name: " << facultyName << endl;
        cout << "Faculty Code: " << facultyCode << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << deptt << endl;
        cout << "Age: " << age << endl;
        cout << "Experience: " << experience << " years" << endl;
        cout << "Gender: " << gender << endl;
    }
};
// Derived Class: Person demonstrating Multiple Inheritance
class Person : public Student, public Faculty {
public:
    // Display function using scope resolution to resolve ambiguity
    void display() {
        Student::display(); // Call Student's display method
        cout << endl;
        Faculty::display(); // Call Faculty's display method
    }
};
int main() {
    // Create an object of Person (which is derived from both Student and Faculty)
    Person p;
    // Input details for Student
    p.inputStudentDetails();
    // Input details for Faculty
    p.inputFacultyDetails();
    // Display both student and faculty information
    cout << "\nDisplaying Complete Information:\n";
    p.display();
    return 0;
}
