#include<iostream>
using namespace std;
class Test{
    public:Test(){
        cout<<"in base class"<<endl;
    }
};
class Best:public Test{
    public : Best():Test(){
        cout<<"in derived class";
    }
};
int main(){
    Best obj;
}