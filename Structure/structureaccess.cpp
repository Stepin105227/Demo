#include <iostream>
using namespace std;

class testdata {
public:
    static int hight;
    int age;
    struct data {
        int roll;
        int salary;
    }xyx;
    struct info {
        int ID;
        int MO_n0;
    };
};
int testdata::hight = 5;

int main() {
    testdata obj;  
    obj.xyx.roll = 1;
    obj.xyx.salary = 1000;
    obj.age = 25;
    testdata::info inf_obj;
    inf_obj.ID = 4490;
    inf_obj.MO_n0 = 7205;
    cout << "Roll: " << obj.xyx.roll << endl;
    cout << "Salary: " << obj.xyx.salary << endl;
    cout << "Age: " << obj.age << endl;
    cout << "hight: " << testdata::hight << endl;
    cout << "info_ID: " << inf_obj.ID << endl;
    cout << "info_mo_no: " << inf_obj.MO_n0 << endl;

    return 0;
}