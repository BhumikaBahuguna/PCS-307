FIND GREATER OF TWO NUMBER/CHARAACTER USING TEMPLATE FUNCTION


#include<iostream>
using namespace std;
template <typename T>
 T great(T a , T b){
return(a>b? a:b);
}
int main(){
cout<<great(10,30)<<endl;
cout<<great(20.5,10.5)<<endl;
cout<<great('a','n')<<endl;
 /*cout<<great(10,20.5);*/   //error template only works for same type of arguments
}
