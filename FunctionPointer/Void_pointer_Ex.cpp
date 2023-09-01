#include <iostream>
using namespace std;
enum demo
{
    first,
    secound,
    third
};
int arr[] = {first, secound, third};
void fun(void *ptr);
void fun(void *ptr)
{
    int *data = (int *)ptr;
    cout<<"\nHello World_DSS = "<<*data;
}
int main()
{
    fun(&arr[0]);    //Hello World_DSS = 0
    fun(&arr[1]);    //Hello World_DSS = 1
    fun(&arr[2]);    //Hello World_DSS = 2
    cout<<"\nHello World";
    return 0;
}
