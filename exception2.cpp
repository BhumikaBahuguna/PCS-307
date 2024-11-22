/*
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
throw 40.50;            //RUNTIME ERROR
}
catch(string s){
cout<<"string exception caught";
}
catch(int){
cout<<"integer exception caught";
}
return 0;
}
*/



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
catch(double){
cout<<"double exception caught";                 //RUNS FINELY
}
return 0;
}
