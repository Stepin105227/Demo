/* write a function that toggles the 3rd and 5th bit 0f 8 bit number */

#include <iostream>
#include <bitset>
#include <stdio.h>
using namespace std;

void toggle_bit(uint8_t *data, uint8_t bit_position);
void toggle_bit(uint8_t *data, uint8_t bit_position)
{
    *data = *data^(1<<bit_position);
}

int main()
{
    uint8_t data = 0b11001101;
    toggle_bit(&data,3);
    toggle_bit(&data,5);
    cout<<bitset<8>(data)<<"\n";  //11100101
    return 0;
}
