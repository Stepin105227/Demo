/* count set bits. design a function that count the number of set bits (1s) in an integer without looping in cpp */
#include <iostream>
#include <bitset>
#include <stdio.h>
using namespace std;

uint8_t counting_no_of_1(uint8_t data);
uint8_t counting_no_of_1(uint8_t data)
{
  uint8_t result;
  if ( data == 0)
    return 0;
  else
    return ((data & 1) + counting_no_of_1(data >>1));
}

int main ()
{
  uint8_t data = 0b11001011;
  int count = counting_no_of_1(data); 
  cout<<"Total 1s : "<<count;
  return 0;
}
