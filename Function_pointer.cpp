// Functio pointer implementation
#include <iostream>
using namespace std;
int add(int x, int y)
{
    return (x+y);
}
int main() 
{
    // function pointer declearation
    int result;
    int (*fptr)(int a, int b);
    fptr = add; //calling a function using function pointer
    result = fptr(5,6);
    cout<<"sum is : "<<result;
    return 0;
}
