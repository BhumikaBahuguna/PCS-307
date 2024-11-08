#include<iostream>
#include<string.h>
using namespace std;
class Bank{
    string name , type_of_acc;
    int acc_no,bal;
public : void assign()
{
    cout<<"enter name:";
    getline(cin,name);
    cout<<"enter type of account:";
    getline(cin,type_of_acc);
    cout<<"enter account number:";
    cin>>acc_no;
    cout<<"enter balance:";
    cin>>bal;
}
void deposit(){
    int amt;
    cout<<"enter amount to deposit:";
    cin>>amt;
    bal=bal+amt;
}
void withdraw(){
    int x;
    cout<<"enter amount to withdraw:";
    cin>>x;
    if(bal>x){
        bal=bal-x;
        cout<<"withdrawl successful "<<"amount left: "<<bal<<endl;
    }
    else
    cout<<"insufficient balance";
    }
void search(){
    int y;
    cout<<"input acc no to be searched:";
    cin>>y;
    if(acc_no==y){
        cout<<"name is "<<name<<endl;
        cout<<"type of acc is "<<type_of_acc<<endl;
        cout<<"acc no is "<<acc_no<<endl;
        cout<<"balance is "<<bal<<endl;
    }
    else{
        cout<<"acc not found";
    }
}
};
int main(){
    Bank b1;
    b1.assign();
    b1.deposit();
    b1.withdraw();
    b1.search();
    return 0;
}

