//pre ,post decrement without friend function
#include<iostream>
using namespace std;
class Complex{
    int a;
    public: Complex(int x){
        a=x;
        }
        Complex(){

        }
        void show(){
            cout<<a<<endl;
        }
     Complex operator-- (){
        Complex temp;
        temp.a=--a;
        return temp;
    }
     Complex operator-- (int){
        Complex temp;
        temp.a=a--;
        return temp;
    }
};
main(){
    Complex c1(10),c2,c3;
    c2=--c1;
    c1.show();
    c2.show();
    c3=c1--;
    c1.show();
    c3.show();
}