/*callback function: function pointer is passed as an argument in another function
*/
#include <iostream>
using namespace std;
int add(int x, int y)
{
    return (x+y);
}
int fun(int (*fptr)(int a, int b))
{
    return (fptr(5,4));
}
int main()
{
    int result;
    result = fun(add);
    cout<<"Result : "<<result;
    return 0;
}
