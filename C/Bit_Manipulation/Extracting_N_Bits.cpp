/* Extracting n bits from bytes*/
#include <iostream>
#include <stdio.h>
#include <bitset>
using namespace std;

uint8_t extract_n_bits(uint8_t data, uint8_t bits, uint8_t start_index);
uint8_t extract_n_bits(uint8_t data, uint8_t bits, uint8_t start_index)
{
    uint8_t temp = ((1<<bits)-1)<<start_index;
    data = (data & temp)>>start_index;
    return data;
}

int main()
{
    uint8_t data = 0b10101110;
    uint8_t extracted_data = extract_n_bits(data, 3, 2);
    cout<<bitset<3>(extracted_data); //011
    return 0;
}
