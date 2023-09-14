#include <iostream>
#include <stdio.h>
using namespace std;

/* Checking number is Pos or Negative */
int pos_or_neg(int data);
/* Checking maximum no between two number */
void max_number(int data1, int data2);
/* Determine provided two number has opposite signs */
bool determine_opposite_signs(int data1, int data2);

int main()
{
    int data = -20;
    int data1 = 20;
    int data2 = -80;
    int status = pos_or_neg(data);
    max_number(data1,data2);
    bool opposite_sign = determine_opposite_signs(data1,data2);
    
    if(status == 0)
    printf("\n%d is Even number",data);
    else
    printf("\n%d is Odd number",data);
    if(opposite_sign == 1)
    printf("\n%d, %d has opposite sign",data1, data2);
    else
    printf("\n%d, %d has same sign",data1, data2);
    return 0;
}

bool determine_opposite_signs(int data1, int data2)
{
    int sign_of_data1 = pos_or_neg(data1);
    int sign_of_data2 = pos_or_neg(data2);
    return (sign_of_data1 ^ sign_of_data2);
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
