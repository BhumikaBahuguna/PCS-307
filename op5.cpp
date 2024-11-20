//FIND GREATEST OF 2 NUMBERS IN TWO DIFFERENT CLASSES
#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public :A(int x){
        a=x;
    }
    friend int lar(A&,B&);
};
class B{
    int b;
    public :B(int y){
        b=y;
    }
    friend int lar(A&,B&);
};
int lar(A &o1,B &o2){
    if(o1.a>o2.b)
    return o1.a;
    else
    return o2.b;
}
main(){
    A ob1(20);
    B ob2(30);
    int l=lar(ob1,ob2);
    cout<<l;
    return 0;
}