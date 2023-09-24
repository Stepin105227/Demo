#include <iostream>
#include <stdio.h>
using namespace std;
void find_unique_num(uint8_t *data, uint8_t length);
int main()
{
    uint8_t data[] = {3,2,3,5,8,5};
    uint8_t length = sizeof(data)/sizeof(data[0]);
    find_unique_num(data, length);
    return 0;
}

void find_unique_num(uint8_t *data, uint8_t length)
{
    uint8_t xor_data,num1,num2 = 0;
    uint8_t right_most_set_bit;
    for(uint8_t i=0; i<length; i++)
    {
        xor_data = xor_data ^ data[i];
    }
    right_most_set_bit = xor_data & -xor_data;
    for(uint8_t j=0; j<length; j++)
    {
        if(data[j] & right_most_set_bit)
        {
            num1 = num1 ^ data[j];
        }
        else
        {
            num2 = num2 ^ data[j];
        }
    }
    printf("\nnum1 = %d", num1); //2
    printf("\nnum1 = %d", num2); //8
}
