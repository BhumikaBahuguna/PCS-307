//SWAP 2 NO OF TWO DIFFERENT CLASSES
#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public: A(int x){
        a=x;
        cout<<a<<" ";
    }
    friend void swap(A&,B&);
    void show(){
        cout<<a<<" ";}
    };
    class B{
    int b;
    public: B(int y){
        b=y;
        cout<<b<<endl;
    }
    friend void swap(A&,B&);
    void show(){
        cout<<b<<endl;}
    };
    void swap(A&o1,B&o2){
        int temp;
        temp=o1.a;
        o1.a=o2.b;
        o2.b=temp;
    }
    main(){
        A ob1(10);
        B ob2(20);
        swap(ob1,ob2);
        ob1.show();
        ob2.show();
        return 0;
    }
