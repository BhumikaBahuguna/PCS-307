EXCEPTION HANDLING IN C++

#include<iostream>
using namespace std;
int main(){
try{
throw 100;
cout<<"hello graphic";
}
catch(int){
cout<<"integer exception caught";         //runs fine
}
return 0;
}


/*
#include<iostream>
using namespace std;
int main(){
try{
throw 100;
cout<<"hello graphic";
}
catch(double){                           //runtime error
cout<<"integer exception caught";
}
return 0;
}
*/




/*
#include<iostream>
using namespace std;
int main(){
try{
throw 100.70;
cout<<"hello graphic";
}
catch(int){
cout<<"integer exception caught";
}
catch(double){
cout<<"double exception caught";             //single try can have multiple catch blocks
}
return 0;
}
*/
