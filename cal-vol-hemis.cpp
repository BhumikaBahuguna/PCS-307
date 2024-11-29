#include <iostream>
#include <cmath>
using namespace std;
class CAL_VOLUME {
protected:
    float radius;
    float height;
public:
    CAL_VOLUME() : radius(0), height(0) {}
    void getdata() {
        cout << "Enter radius: ";
        cin >> radius;
        if (height == 0) {
            cout << "Enter height: ";
            cin >> height;
        }
    }
    virtual void display_volume() = 0;
    virtual ~CAL_VOLUME() {}
};
class Cone : public CAL_VOLUME {
public:
    void display_volume() override {
        float volume = (1.0 / 3.0) * M_PI * radius * radius * height;
        cout << "Volume of Cone: " << volume << endl;
    }
};
class Hemisphere : public CAL_VOLUME {
public:
    void display_volume() override {
        float volume = (2.0 / 3.0) * M_PI * pow(radius, 3);
        cout << "Volume of Hemisphere: " << volume << endl;
    }
};
class Cylinder : public CAL_VOLUME {
public:
    void display_volume() override {
        float volume = M_PI * radius * radius * height;
        cout << "Volume of Cylinder: " << volume << endl;
    }
};
int main() {
    CAL_VOLUME* coneObj = new Cone();
    CAL_VOLUME* hemisphereObj = new Hemisphere();
    CAL_VOLUME* cylinderObj = new Cylinder();
    cout << "Enter data for Cone:" << endl;
    coneObj->getdata();
    coneObj->display_volume();
    cout << "Enter data for Hemisphere:" << endl;
    hemisphereObj->getdata();
    hemisphereObj->display_volume();
    cout << "Enter data for Cylinder:" << endl;
    cylinderObj->getdata();
    cylinderObj->display_volume();
    delete coneObj;
    delete hemisphereObj;
    delete cylinderObj;
    return 0;
}
