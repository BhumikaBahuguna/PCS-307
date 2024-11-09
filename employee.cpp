#include<iostream>
using namespace std;
#include<string>
class Employee {
    string name;
    string depart;
    int id;
    float total;
    float bs,ta,da,hra;

    public : void getData()
    {
        cout<<"enter name:";
        getline(cin,name);
        cout<<"enter department:";
        cin>>depart;
        cout<<"enter id:";
        cin>>id;
        cout<<"enter basic salary:";
        cin>>bs;
        ta=0.1*bs;
        da=2.58*bs;
        hra=0.3*bs;
        total=bs+ta+da+hra;
    }

    void showData()
    {
        cout<<"name is:"<<name<<endl;
        cout<<"department is:"<<depart<<endl;
        cout<<"id is:"<<id<<endl;
        cout<<"total salary is:"<<total<<endl;
    }
};
int main()
{
    Employee e1;
    e1.getData();
    e1.showData();
    return 0;
}