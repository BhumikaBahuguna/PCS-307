IF WE WANT TO PASS TWO DIFFERENT DATATYPES IN TEMPLATE FUNCTION

#include<iostream>
using namespace std;
template <typename T1 , typename T2>
 T1 great(T1 a , T2 b){
return(a>b? a:b);
}
int main(){
//cout<<great(10,30)<<endl;
//cout<<great(20.5,10)<<endl;
//cout<<great('a','n')<<endl;
cout<<great(10,20.5);
}
