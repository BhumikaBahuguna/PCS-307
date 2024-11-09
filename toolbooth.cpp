#include<iostream>
using namespace std;
class Toolbooth {
    unsigned int tot_cars;
    double tot_amt;
    public : Toolbooth()
    {
        tot_cars=0;
        tot_amt=0;
    }
    void payingCar(){
        int x;
        cout<<"enter no of paying car:";
        cin>>x;
        tot_cars+=x;
        tot_amt+=x*0.5;
    }
    void nonPayCar(){
        int y;
        cout<<"enter no of non paying car:";
        cin>>y;
        tot_cars+=y;
    }
    void display(){
        cout<<"total number of cars are:"<< tot_cars<<endl;
        cout<<"total cash total is:"<<tot_amt<<endl;
    }
};
int main()
{   Toolbooth toolbooth;
    int ch;
    do{
    cout<<"enter 1 to print paying cars\nenter 2 to print non paying cars\nenter 3 to print the 2 totals and exit\n";
    cout<<"enter choice:";
    cin>>ch;
    switch(ch){
        case 1:
        toolbooth.payingCar();
        break;
        case 2:
        toolbooth.nonPayCar();
        break;
        case 3:
        toolbooth.display();
        return 0;
        default:
        cout << "Invalid choice, please try again." << endl;
        break;
    }
    }while(ch<=3);
    return 0;
}