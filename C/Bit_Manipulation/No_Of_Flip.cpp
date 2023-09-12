/* Count no of flip to convert one number to another*/
#include <iostream>
#include <stdio.h>
using namespace std;

uint8_t no_of_flip(uint8_t data1, uint8_t data2);
uint8_t no_of_set_bit(uint8_t data);

uint8_t no_of_flip(uint8_t data1, uint8_t data2)
{
    uint8_t temp = data1 ^ data2;
    uint8_t count = no_of_set_bit(temp);
    return count;
}

uint8_t no_of_set_bit(uint8_t data)
{
    uint8_t temp_count =0;
    while(data !=0)
    {
        temp_count = temp_count + (data & 1);
        data = data>> 1;
    }
    return temp_count;
}

int main()
{
    uint8_t data1 = 0b11101;
    uint8_t data2 = 0b01111;
    uint8_t count = no_of_flip(data1, data2);
    printf("%d",count);
    return 0;
}

