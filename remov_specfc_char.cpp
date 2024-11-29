#include<iostream>
using namespace std;
int main(){
    string s;
    char ch;
    int i,j;
    cout<<"enter string:";
    getline(cin,s);
    cout<<"enter character:";
    cin>>ch;
    string result = ""; 
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ch) {  
            result += s[i]; 
        }
    }
    cout << "Updated string: " << result << endl;
    return 0;
}