#include <iostream>
#include <list>   // For std::list
#include <queue>  // For std::queue
#include <stack>  // For std::stack
#include <vector> // For std::vector
using namespace std;

int main() {
    // List demonstration
    list<int> mylist{10,20,30,40}; // Initialize a list with values
    cout << "List elements: " << endl;
    for (int i : mylist) {
        cout << i << " "; // Iterate through the list and print elements
    }
    cout << endl;

    // Queue demonstration (FIFO: First In, First Out)
    queue<int> myqueue;
    myqueue.push(101);
    myqueue.push(102);
    myqueue.push(103);
    myqueue.push(104);
    cout << "Queue elements (FIFO): " << endl;
    while (!myqueue.empty()) {
        cout << myqueue.front() << " "; // Access the front element of the queue
        myqueue.pop();                  // Remove the front element
    }
    cout << endl;

    // Stack demonstration (LIFO: Last In, First Out)
    stack<int> mystack;
    // Adding elements to the stack
    mystack.push(50);
    mystack.push(40);
    mystack.push(80);
    mystack.push(90);
    cout << "Stack elements (LIFO): " << endl;
    while (!mystack.empty()) {
        cout << mystack.top() << " "; // Access the top element of the stack
        mystack.pop();                // Remove the top element
    }
    cout << endl;

    // Vector demonstration
    vector<int> myvector{111, 222, 333, 444}; // Initialize a vector with values
    cout << "Vector elements: " << endl;
    for (int i : myvector) {
        cout << i << " "; // Iterate through the vector and print elements
    }
    cout << endl;

    return 0;
}
