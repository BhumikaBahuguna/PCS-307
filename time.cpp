#include<iostream>
using namespace std;
class Time {
    private : int hr,min,sec;
    public : Time(){
        hr=0;
        min=0;
        sec=0;
    }
    Time(int x,int y,int z){
        hr=x;
        min=y;
        sec=z;
    }
    void display(){
        if (hr < 10) cout << '0';
        cout << hr << ':';
        if (min < 10) cout << '0';
        cout << min << ':';
        if (sec < 10) cout << '0';
        cout << sec << endl;
    }
    void add(Time t1, Time t2) {
        int totalSeconds = (t1.hr * 3600 + t1.min * 60 + t1.sec) +
                           (t2.hr * 3600 + t2.min * 60 + t2.sec);

        hr = totalSeconds / 3600;
        min = (totalSeconds % 3600) / 60;
        sec = totalSeconds % 60;
    }
    };
int main()
{
    Time t1(12, 33, 45);
    Time t2(10, 56, 41);
    cout << "Time 1: ";
    t1.display();
    cout << "Time 2: ";
    t2.display();
    Time t3 ;
    t3.add(t1,t2);
    cout << "Sum of Time 1 and Time 2: ";
    t3.display();
    return 0;
}