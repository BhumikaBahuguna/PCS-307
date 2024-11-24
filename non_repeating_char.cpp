#include<iostream>
#include<string>
using namespace std;

void findNonRepeatingCharacters(const string& str) {
    // Create an array to store the frequency of characters (assuming ASCII characters)
    int freq[256] = {0};  // Initialize all elements to 0
    
    // Count the frequency of each character in the string
    for (char ch : str) {
        if (ch != ' ') {  // Ignore spaces
            freq[(int)ch]++;  // Increment the frequency for this character
        }
    }

    // Print the non-repeating characters
    for (char ch : str) {
        if (ch != ' ' && freq[(int)ch] == 1) {
            cout << ch << " ";
            freq[(int)ch] = 0;  // Set the frequency to 0 to avoid printing it again
        }
    }
    cout << endl;  // End the output with a newline
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);  // Read a full line of input including spaces
    
    cout << "Non-repeating characters: ";
    findNonRepeatingCharacters(input);  // Call the function to find and print non-repeating characters
    
    return 0;
}
