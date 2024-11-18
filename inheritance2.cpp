#include<iostream>
using namespace std;
class Student{
    string name;
    int roll;
    public:void getInfo(){
        getchar();
        cout<<"enter name:";
        getline(cin,name);
        cout<<"enter roll no:";
        cin>>roll;
    }
    void showInfo(){
        cout<<"name is:"<<name<<endl;
        cout<<"roll number is:"<<roll<<endl;
    }
};
class Marks:private Student{
    protected:int m1,m2,m3,m4,m5;
    public:void getMarks(){
        cout<<"enter marks:";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
        getInfo();
        showInfo();
    }
};
class Result :protected Marks{
    int total;
    int sp_marks;
    public :void getTotal(){
        getMarks();
        cout<<"enter sports marks";
        cin>>sp_marks;
        total=m1+m2+m3+m4+m5+sp_marks;
    }
    void showAll(){
        cout<<"total marks are:"<<total<<endl;
    }
};

int main(){
    Result r;
    r.getTotal();
    r.showAll();
}