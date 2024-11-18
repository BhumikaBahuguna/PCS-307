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
    A *p;
    B ob;
    p=&ob;
    p->f1();
    return 0;
}
