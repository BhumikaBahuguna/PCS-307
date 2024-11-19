#include<iostream>
using namespace std;
class Test{
    public:Test(int x)
    {
        cout<<"base class"<<endl;
    }
};

class Best:public Test{
    public:Best():Test(10)
    {
        cout<<"derived class";
    }
};
int main(){
    Best ob;
    return 0;
}