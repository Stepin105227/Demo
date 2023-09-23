/* Decimal to binary conversion using bit manuplication */
#include <iostream>
#include <stdio.h>
using namespace std;

string decimal_to_binary(uint8_t data);
int main()
{
    uint8_t data = 5;
    string str = decimal_to_binary(data);
    cout<<"\nData == "<<str;
    return 0;
}
string decimal_to_binary(uint8_t data)
{
    if (data == 0)
        return "0";
    string temp_str;
    uint8_t bit;
    while(data >0)
    {
        bit = (data & 1);
        temp_str = static_cast<char>('0'+bit ) + temp_str;
        data = data>>1;
    }
    return temp_str;
}
