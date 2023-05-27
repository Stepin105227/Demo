/* array of function pointer.
*/
#include <iostream>
using namespace std;

int add(int x, int y) { return (x+y);}
int Sub(int x, int y) {  return (x-y);}
int square(int x) {  return (x*x);}
int cube(int x) {  return (x*x*x);}

typedef int (*fptr) (int, int);  // 1st methord one

int main()
{
    int result;
    int (* array_fptr_old[2])(int) = {square, cube}; // 2nd methord one
    fptr array_fptr[2] = {add, Sub};
    result = array_fptr[0](10,5);
    cout<<"ADD(10,5) : "<<result<<"\n";
    result = array_fptr[1](15,2);
    cout<<"SUB(15,2) : "<<result<<"\n";
    
   result = array_fptr_old[0](5);
   cout<<"square(5) : "<<result<<"\n";
   result = array_fptr_old[1](3);
   cout<<"cube(3) : "<<result<<"\n";
   return 0;
}
