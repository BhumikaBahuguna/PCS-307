#include<iostream>
using namespace std;
class B;
class A{
    string nm,f_n,m_n,g;
    public: void Inputinfo(){
        cout<<"input name:"<<endl;
        getline(cin,nm);
        cout<<"input fathers name:"<<endl;
        getline(cin,f_n);
        cout<<"input mothers name:"<<endl;
        getline(cin,m_n);
        cout<<"enter gender:"<<endl;
        getline(cin,g);
    }
    friend void userchecker(A&,B&);
};
class B{
    string nm,f_n,m_n,g;
    public: void Inputinfo(){
        cout<<"input name:"<<endl;
        getline(cin,nm);
        cout<<"input fathers name:"<<endl;
        getline(cin,f_n);
        cout<<"input mothers name:"<<endl;
        getline(cin,m_n);
        cout<<"enter gender:"<<endl;
        getline(cin,g);
    }
    friend void userchecker(A&,B&);
};
void userchecker(A &o1,B &o2){
    if((o1.f_n.compare(o2.f_n)==0) && (o1.m_n.compare(o2.m_n)==0)){
    cout<<"belongs to same family"<<endl;
    if(o1.g=="male" && o2.g=="male")
    cout<<"we are brothers";
    else if(o1.g=="female" && o2.g=="female")
    cout<<"we are sisters";
    else
    cout<<"we are brother and sister";
}
else
cout<<"not belong to same family";
}
main(){
    A ob1;
    ob1.Inputinfo();
    B ob2;
    ob2.Inputinfo();
    userchecker(ob1,ob2);
    return 0;
}