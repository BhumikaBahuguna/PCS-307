//ACCESS MULTIPLE CLASSES USING FRIEND FUNCTION

#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public: A(int x)
    {
        a=x;
    }
    friend int add(A&,B&);
};
class B{
    int b;
    public: B(int y){
        b=y;
    }
    friend int add(A&,B&);
};
int main(){
    int s;
    A ob1(10);
    B ob2(20);
    s=add(ob1,ob2);
    cout<<s;
    return 0;
}
int add(A& o1,B& o2){
        return o1.a+o2.b;
}