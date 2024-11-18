#include<iostream>
using namespace std;
class A{
    public:
    void f1(){
        cout<<"base class";
    }
};
class B:public A{
    public:
    void f1(){
        cout<<"derived class";
    }
};

int main(){
    B ob;
    ob.f1();
    return 0;
}
