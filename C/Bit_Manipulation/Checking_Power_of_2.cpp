/* Checking whether given number is a power of 2 or not */
#include <iostream>
#include <bitset>
#include <stdio.h>
using namespace std;

void checking_pow_of_2(uint8_t data);
void checking_pow_of_2(uint8_t data)
{
  uint8_t result;
  result = data >> 1;
  result = result <<1;
  if( result == data)
  {
    printf("\n%d is Power of two",data);
  }
  else
  {
    printf("\n%d is not Power of two",data);
  }
}

int main ()
{
  checking_pow_of_2(31); 
  checking_pow_of_2(212); 
  return 0;
}
