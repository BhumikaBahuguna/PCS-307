USE TEMPLATE FUNCTION TO SWAP TO INTEGERS AND TWO CHARACTERS

#include<iostream>
using namespace std;
template <typename T>
void swap(T *a , T *b){
T c;
c=*a;
*a=*b;
*b=c;
}
int main(){
int a,b;
cin>>a>>b;
char x,y;
cin>>x>>y;
swap(&a,&b);
cout<<a<<" "<<b<<endl;
swap(&x,&y);
cout<<x<<" "<<y<<endl;
}
