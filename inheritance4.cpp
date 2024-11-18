#include<iostream>
using namespace std;
class Student{
    int age,enroll,marks;
    string name;
public:void getInfo(){
        cout<<"enter name:";
        getline(cin,name);
        cout<<"enter age:";
        cin>>age;
        cout<<"enter enroll no:";
        cin>>enroll;
        cout<<"enter marks:";
        cin>>marks;
    }
void display(){
    cout<<"name is:"<<name<<endl;
    cout<<"age is:"<<age<<endl;
    cout<<"marks are:"<<marks<<endl;
    cout<<"enroll no is:"<<enroll<<endl;
}
};
class Faculty{
    public: string name,depart;
    int id,salary;
    void get(){
        getchar();
        cout<<"enter name:";
        getline(cin,name);
        cout<<"enter department:";
        getline(cin,depart);
        cout<<"enter id:";
        cin>>id;
        cout<<"enter salary:";
        cin>>salary;
    }
    void display(){
    cout<<"name is:"<<name<<endl;
    cout<<"department is:"<<depart<<endl;
    cout<<"ID are:"<<id<<endl;
    cout<<"salary no is:"<<salary<<endl;
    }
};
class Person:protected Student , protected Faculty{
    public:void call(){
        getInfo();
        get();
        Student::display();
        Faculty::display();
    }
};

int main(){
    Person obj;
    obj.call();
    return 0;
}
