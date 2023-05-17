/* array of function pointer.
*/
#include <iostream>
using namespace std;

int add(int data_1, int data_2) { return (data_1 + data_2);}
int Sub(int data_1, int data_2) { return (data_1 - data_2);}
int square(int data) {  return (data * data);}
int cube(int data) {  return (data * data * data);}

typedef int (*fptr) (int, int);  // 1st methord one (with typedef)

int main()
{
    int result;
    int (* array_fptr_old[2])(int) = {square, cube}; // 2nd methord one (without tpyedef)
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
