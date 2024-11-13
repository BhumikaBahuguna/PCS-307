//STATIC VARIABLE WITH CLASS

/*
#include<iostream>
using namespace std;
class Dummy{
    public:static int x;
};
int Dummy :: x;
int main(){
    Dummy ob;
    cout<<ob.x;       //X IS ACCESSIBLE HERE AS IT IS PUBLIC
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
class Dummy{
    public:static int x;
};
int Dummy :: x=100;
int main(){
    Dummy ob;
    cout<<ob.x;       
    return 0;
}
*/


/*
#include<iostream>
using namespace std;
class Dummy{
    public:static int x;
};
int Dummy :: x;
int main(){
    Dummy ob1,ob2,ob3;
    ob1.x=10;
    ob2.x=20;
    ob3.x=30;
    cout<<ob1.x<<" "<<ob2.x<<" "<<ob3.x;       //IF THERE ARE N OBJS
    return 0;                                  //EACH OBJ MUST SHARE A COMMON VALUE
}                                              //MOST UPDATED VALUE HERE IS 30
                                               //THEREFORE OB1,OB2,OB3 ALL SHARE VALUE 30

*/