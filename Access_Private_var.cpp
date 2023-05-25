// We can access private variable in cpp using pointer
#include <iostream>
using namespace std;
class Test_Class
{
    public:
        void show();
    private:
    int a;
    int b;
};
void Test_Class :: show()
{
    cout<<"A : "<<a<<" at : "<<&a<<"\n";
    cout<<"B : "<<b<<" at : "<<&b<<"\n";
}
int main() 
{
    Test_Class obj;
    int *ptr;
    ptr = (int *)&obj;
    *ptr = 100;
    ptr++;
    *ptr = 200;
    ptr--;
    cout<<" a : "<<*ptr<<" at : "<<ptr<<"\n";
    cout<<"b : "<<*(ptr+1)<<" at : "<<ptr+1<<"\n";
    obj.show();
    return 0;
}

/ *
//////////////////output////////////////////
a : 100 at : 0x7fffbd9bd8f0
b : 200 at : 0x7fffbd9bd8f4
A : 100 at : 0x7fffbd9bd8f0
B : 200 at : 0x7fffbd9bd8f4
///////////////////////////////////////////////
*/
