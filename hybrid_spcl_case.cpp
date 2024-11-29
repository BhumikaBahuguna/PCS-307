#include<iostream>
using namespace std;
class Student{
    private:string name;
    int age;
    public:void getInfo(){
        cout<<"enter name:";
        getline(cin,name);
        cout<<"enter age:";
        cin>>age;
    }
    void showInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
};

class Marks:virtual public Student{
    protected:
        int m1,m2,m3;
    public:void getMarks()
    {
        cout<<"enter maarks:";
        cin>>m1>>m2>>m3;
    }
};
class Extracirr:virtual public Student{
    protected:
        int gp,sp_marks;
    public:void getExtra()
    {
        cout<<"enter gp marks:";
        cin>>gp;
        cout<<"enter sports marks:";
        cin>>sp_marks;
    }
};
class Result:public Marks,public Extracirr{
    int t;
    public: void total()
    {
        getMarks();
        getExtra();
        t=m1+m2+m3+gp+sp_marks;
    }
    void display()
    {
        cout<<"total marks are:"<<t<<endl;
        showInfo();
    }
};

int main(){
    Result obj;
    obj.getInfo();
    obj.total();
    obj.display();
    return 0;
}