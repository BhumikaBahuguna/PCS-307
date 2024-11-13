//SUBTRACTING TWO COMPLEX NUMBERS
#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public: Complex(int x,int y){
        a=x;
        b=y;
    }
    Complex(){

    }
    void show(){
        cout<<a<<"+i"<<b;
    }
    Complex sub(Complex &o){
        Complex temp;
        temp.a=a-o.a;
        temp.b=b-o.b;
        return temp ;
    }
};
int main(){
    Complex c1(30,40),c2(10,20),c3;
    c3=c1.sub(c2);
    c3.show();
    return 0;
}