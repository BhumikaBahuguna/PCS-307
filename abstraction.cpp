#include<iostream>
using namespace std;
class Student {
    private : string name,branch;
    int roll_no,marks[5];
    void getData()
    {
        cout<<"input name:";
        getline(cin,name);
        cout<<"input branch:";
        getline(cin,branch);
        cout<<"input roll number:";
        cin>>roll_no;
        cout<<"input marks:";
        for(int i=0;i<5;i++)
        cin>>marks[i];
    }
     public : void showData()
    {
        getData();
        cout<<"name is:"<<name<<endl;
        cout<<"branch is:"<<branch<<endl;
        cout<<"marks are:";
        for(int i=0;i<5;i++)
        cout<<marks[i]<<endl;
        cout<<"roll number is:"<<roll_no<<endl;

    }
};
int main()
{
    Student s1;
    s1.showData();
    return 0;
}