/* Swap odd and even bits using bit manipulation */
#include <iostream>
#include <bitset>
#include <stdio.h>
using namespace std;

uint8_t swaping_even_ana_odd_bits(uint8_t data);

uint8_t swaping_even_ana_odd_bits(uint8_t data)
{
  uint8_t even_bits = data & 0b10101010; 
  uint8_t odd_bits =  data & 0b01010101; 
  even_bits = even_bits >>1;
  odd_bits = odd_bits <<1;
  return (even_bits | odd_bits);
}

int main ()
{
  uint8_t data = 0b11101001;
  uint8_t swaped_data = swaping_even_ana_odd_bits(data); 
  cout<<"Before Swaped : "<<bitset<8>(data)<<"\n";          // 1110 1001 
  cout<<"After  Swaped : "<<bitset<8>(swaped_data)<<"\n";   // 1101 0110
  return 0;
}
