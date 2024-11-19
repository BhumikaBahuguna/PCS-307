#include<iostream>
using namespace std;
class A{
    private:string s;
    public:void get(){
        s="graphic";
    }
    void show(){
        cout<<s;
    }
};
class B{
    private:A ob;
    public : void display(){
        ob.get();
        ob.show();
    }
};
int main(){
    B ob1;
    ob1.display();
    return 0;
}