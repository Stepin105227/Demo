
// Function pointer on operator overloading
#include <iostream>
using namespace std;
class complex
{
    private:
        int x,y;
    public:
        void set_data(int a, int b) {x = a; y=b;}
        void display_data()
        {
            cout<<"Result: "<<x<<" + "<<y<<"i" <<"\n";
        }
        friend complex operator +(complex, complex);
        friend complex operator -(complex);
};

complex operator +(complex c1, complex c2)
{
    complex temp_complex;
    temp_complex.x = c1.x + c2.x;
    temp_complex.y = c1.y + c2.y;
    return temp_complex;
}

complex operator -(complex c3)
{
    complex temp_complex;
    temp_complex.x = -c3.x;
    temp_complex.y = -c3.y;
    return temp_complex;
}

int main() {
    complex comp_obj1,comp_obj2,comp_obj3,comp_obj4;
    comp_obj1.set_data(2,3);
    comp_obj2.set_data(4,5);
    comp_obj3 = comp_obj1 + comp_obj2;
    comp_obj3.display_data();
    comp_obj4 = -comp_obj1;
    comp_obj4.display_data();
    return 0;
}
