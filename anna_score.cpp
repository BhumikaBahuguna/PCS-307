#include<iostream>
using namespace std;

class Student {
private:
    int scores[5];  // Array to store the 5 exam scores

public:
    // Function to input 5 exam scores
    void input() {
        for (int i = 0; i < 5; i++) {
            cin >> scores[i];  // Read each score and store it in the array
        }
    }

    // Function to calculate and return the total score (sum of the 5 scores)
    int calculateTotalScore() {
        int totalScore = 0;
        for (int i = 0; i < 5; i++) {
            totalScore += scores[i];  // Add each score to the total
        }
        return totalScore;
    }
};

int main() {
    int n;  // Number of students
    cin >> n;

    Student anna;  // Create Anna's student object
    anna.input();  // Input Anna's scores
    int annaTotalScore = anna.calculateTotalScore();  // Calculate Anna's total score
    
    int count = 0;  // Counter for how many students scored higher than Anna

    // Loop through the remaining students and compare their scores
    for (int i = 1; i < n; i++) {
        Student student;
        student.input();  // Input this student's scores
        int studentTotalScore = student.calculateTotalScore();  // Calculate this student's total score

        if (studentTotalScore > annaTotalScore) {
            count++;  // If the student's score is higher than Anna's, increment count
        }
    }

    cout << count << endl;  // Output the number of students who scored higher than Anna

    return 0;
}
