#include<iostream>
using namespace std;
class Test{
    int a;
    public:Test(int k){
        a=k;
        cout<<a<<endl;
    }
};
class Best: public Test{
    int b;
    public:Best(int x, int y):Test(x){
        b=y;
    }
};
int main(){
    Best ob(100,200);
    return 0;
}