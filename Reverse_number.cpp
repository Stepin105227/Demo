/******************************************
Reverse the number
*******************************************/
#include <iostream>
using namespace std;
/******************************************
function Prototype
*******************************************/
int rev_num_call_by_Value(int );
void rev_num_call_by_Address(int* );
void rev_num_call_by_Reference (int* );

/******************************************
Recerse the number through call by reference
*******************************************/
void rev_num_call_by_Reference (int* ref_ptr)
{
    int sum =0,last_number =0;
    while(*ref_ptr > 0)
    {
        last_number = *ref_ptr %10;
        sum = sum*10 + last_number;
        *ref_ptr = *ref_ptr/10;
    }
    *ref_ptr = sum;
}
/******************************************
Recerse the number through call by address
*******************************************/
void rev_num_call_by_Address(int *ptr)
{
    int sum =0,last_number =0;
    while(*ptr > 0)
    {
        last_number = *ptr %10;
        sum = sum*10 + last_number;
        *ptr = *ptr/10;
    }
    *ptr = sum;
}
/******************************************
Recerse the number through call by value
*******************************************/
int rev_num_call_by_Value(int number)
{
    int sum =0,last_number =0;
    while(number >0)
    {
        last_number = number %10;
        sum = sum*10 + last_number; 
        number = number/10; 
    }  
    return sum;
}
int main() {
    int data = 1456578,data1 = 56789,data2 = 112233;
    int reversed_number =0;
    reversed_number = rev_num_call_by_Value(data);
    cout<<"Before_Reverse :" <<data<<"\n";
    cout<<"After_Reverse_call_by_value  :" <<reversed_number<<"\n";
    cout<<"Before_Reverse :" <<data1<<"\n";
    rev_num_call_by_Address(&data1);
    cout<<"After_Reverse_call_by_address :" <<data1<<"\n";
    int &data_ref = data2;
    cout<<"Before_Reverse :" <<data2<<"\n";
    rev_num_call_by_Reference(&data_ref);
    cout<<"After_Reverse_call_by_reference :" <<data2<<"\n";
    return 0;
}
