//virtual function is the example of run time Polymorphism (late binding)
#include <iostream>
using namespace std;
class A
{
    public:
    virtual void fun()
    {
        std::cout << "\n From Class A";
    }
};
class B: public A
{
    public:
    void fun()
    {
        std::cout << "\n From Class B";
    }
};

class C
{
    public:
    virtual void fun() = 0;
    void fun1()
    {
        std::cout << "\n From Class A";
    }
};
int main() {
    A *a_ref;
    B obj_b;
    a_ref = &obj_b;
    a_ref->fun();
   // C obj_c; 
   // class C has one pure virtual function (without diffinition) that's why we can not create object of that class (Abstract class)
    return 0;
}
