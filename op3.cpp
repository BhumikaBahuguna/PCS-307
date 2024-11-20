#include<iostream>
using namespace std;
class Dummy{
    int a,b;
    public:Dummy(int x,int y){
        a=x;
        b=y;
    }
    Dummy()
    {

    }
    void display(){
       cout<<a;
       cout<<" "<<b<<endl;
    }
    Dummy operator-(){
        Dummy temp;
        temp.a=a*-1;
        temp.b=b*-1;
        return temp;
    }
};
main(){
    Dummy c1(100,200),c2;
    c2=c1.operator-( );
    c1.display();
    c2.display();
}
