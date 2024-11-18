#include<iostream>
using namespace std;
class A{
    public:void f1(){
        cout<<"hello"<<endl;
    }
    void f2(){
        cout<<"hi"<<endl;
    }
};

class B:public A{
    public:void f1(){
        cout<<"bye"<<endl;
    }
    void f2(int x){
        cout<<"graphic"<<endl;
    }
};

int main(){
    B obj;
    obj.f1();
    obj.f2(5);//method hiding
    return 0;
}