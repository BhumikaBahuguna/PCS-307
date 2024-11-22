ELLIPSIS TO CATCH ANY EXCEPTION

#include<iostream>
using namespace std;
int main(){
int a=20;
try{
if(a==10)
throw 10;
if(a==30)
throw "hello";
if(a==20)
throw 40.50;
}
catch(string s){
cout<<"string exception caught";
}
catch(int){
cout<<"integer exception caught";
}
catch(...){
cout<<"exception caught";                  //IF APROPRIATE CATCH NOT PRESENT TO CATCH THE ERROR 
}                                          //ELLIPSISS CATCHES ANY TYPE PF ERROR
return 0;
}
