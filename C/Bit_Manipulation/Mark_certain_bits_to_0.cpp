#include <iostream>
#include <stdio.h>
#include <bitset>
using namespace std;

/* Mark certain bits to zero */
void  Mark_certain_bits_to_zero(uint8_t data, int bits);
void  Mark_certain_bits_to_zero1(void *ptr, int bits, size_t size);

void Mark_certain_bits_to_zero(uint8_t data, int bits)
{
    uint8_t temp_data ;
    temp_data = (1<<bits)-1;
    bits = 8 - bits;
    temp_data = ~(temp_data <<bits); 
    data = data & temp_data;
    cout<<"Data : "<<bitset<8>(data)<<"\n";
}
int main()
{
    uint8_t data = 0b10111101;  
    Mark_certain_bits_to_zero(data,3);                      //0001 1101
    Mark_certain_bits_to_zero1(&data,4, sizeof(data));      //0000 1101 
    uint16_t data1 = 0b1011110111110101;
    Mark_certain_bits_to_zero1(&data1,9, sizeof(data1)); //0000 0000 0111 0101 
    return 0;
}

void Mark_certain_bits_to_zero1(void * ptr, int bits, size_t size)
{
    if(size == sizeof(uint8_t))
    {
        uint8_t temp_data = 0;
        uint8_t *data = (uint8_t *)ptr ;
        temp_data = (1<<bits)-1;
        bits = 8 - bits;
        temp_data = ~(temp_data <<bits); 
        *data = *data & temp_data;
        cout<<"Data : "<<bitset<8>(*data)<<"\n";
    }
    else if(size == sizeof(uint16_t))
    {
        uint16_t temp_data = 0;
        uint16_t *data = (uint16_t *)ptr ;
        temp_data = (1<<bits)-1;
        bits = 16 - bits;
        temp_data = ~(temp_data <<bits); 
        *data = *data & temp_data;
        cout<<"Data : "<<bitset<16>(*data)<<"\n";
    }
}
