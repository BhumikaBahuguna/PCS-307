#include<iostream>
using namespace std;
class Academic{
    string name;
    int roll;
    protected:int m1,m2,m3;
    void getInfo(){
        cout<<"enter name:";
        getline(cin,name);
        cout<<"enter roll no:";
        cin>>roll;
        cout<<"enter marks:";
        cin>>m1>>m2>>m3;
    }
    void showInfo(){
        cout<<"name is: "<<name<<endl;
        cout<<"roll number is: "<<roll<<endl;
    }
};
class Extracirr{
    protected:int sp_marks,gp_marks;
    public:void getMarks(){
        cout<<"enter sports maks:";
        cin>>sp_marks;
        cout<<"enter gp marks:";
        cin>>gp_marks;
    }
};
class Result:private Academic,protected Extracirr{
    int total;
    public:void getTotal(){
        getInfo();
        getMarks();
        total=m1+m2+m3+sp_marks+gp_marks;
    }
    void show(){
        cout<<"total marks are:"<<total<<endl;
        showInfo();
    }
};

int main(){
    Result r;
    r.getTotal();
    r.show();
    return 0;
}