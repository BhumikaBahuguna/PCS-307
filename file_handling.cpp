FILE HANDLING IN C++


#include <iostream>
#include<fstream>
using namespace std;
int main() {
    char ch;
    ofstream out;                            //used to write
    out.open("source.txt");                  //open file to write
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++){
    out<<a[i];
    out<<" ";
    }
    out<<endl;
    out<<"graphic era university"<<endl;
    out<<"cse"<<endl;
    out.close();
    ifstream in;                          //used to read file
    in.open("source.txt");
    ch=in.get();                          //character by character read
    while(! in.eof()){
    cout<<ch;
    ch=in.get();
    }
    in.close();
    return 0;
}
