
#include <iostream>
#include <stdio.h>
using namespace std;

/* Checking number is Pos or Negative */
int pos_or_neg(int data);
/* Checking maximum no between two number */
void max_number(int data1, int data2);

int main()
{
    int data = -20;
    int status = pos_or_neg(data);
    max_number(20,-80);
    if(status == 0)
    printf("\n%d is Even number",data);
    else
    printf("\n%d is Odd number",data);
    return 0;
}
void max_number(int data1, int data2)
{
    int diff,result,max_num;
    diff = data1 - data2;
    result = pos_or_neg(diff);
    max_num = data1 - (result * diff);
    cout<<"\nmax is : "<<max_num;
}

int pos_or_neg(int data)
{
    data = data>>((sizeof(data)*8) -1);
    data = data & 1;
    return data;
}
