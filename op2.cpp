//UNARY OPERATOR OVERLOADING
#include<iostream>
using namespace std;
class Dummy{
    int a;
    public:Dummy(int x){
        a=x;
    }
    Dummy(){
        
    }
    void show(){
        cout<<a<<endl;
    }
    Dummy operator-(){
        Dummy temp;
        temp.a=a*-1;
        return temp;
    }
    };
    main(){
        Dummy ob1(100),ob2;
        ob2=-ob1;
        ob1.show();
        ob2.show();
    }

