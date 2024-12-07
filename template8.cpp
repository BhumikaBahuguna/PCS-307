#include<iostream>
using namespace std;
template <typename T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main(){
    int x=10,y=20;
    cout<<x<<" "<<y<<endl;
    swapp(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}