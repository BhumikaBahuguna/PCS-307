#include<iostream>
using namespace std;
class Hotel
{
    private : int r_no,nod;
    string name;
    double tariff;
    void calc(){
        double amt;
        amt=nod*tariff;
        if(amt>10000)
        amt=1.05*nod*tariff;
        cout<<"number of days :"<<nod<<endl;
        cout<<"total payble amount:"<<amt<<endl;
    }
    public : void checkin() {
        cout<<"enter name:";
        getline(cin,name);
        cout<<"enter room no:";
        cin>>r_no;
        cout<<"enter number of days:";
        cin>>nod;
        cout<<"enter per day charges:";
        cin>>tariff;
  
    }
    void checkout() {
        cout<<"room number is:"<<r_no<<endl;
        cout<<"name is:"<<name<<endl;
        cout<<"charges per day are:"<<tariff<<endl;
        calc();
    }
};
int main()
{
    Hotel h1;
    h1.checkin();
    h1.checkout();
    return 0;
}