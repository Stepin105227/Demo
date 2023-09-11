/* Set n MSB bit */
#include <iostream>
#include <bitset>
#include <stdio.h>
using namespace std;

uint8_t set_bit (uint8_t data, uint8_t bits);
uint8_t set_bit (uint8_t data, uint8_t bits)
{
  for(uint8_t bit =7; bit >(7-bits); bit--)
  {
    data = data | (1<< bit);
  }
  return data;
}

int main ()
{
  uint8_t data = 0;
  data = set_bit (data,3); 
  cout << bitset < 8 > (data) << "\n";	//1110 0000 
  return 0;
}
