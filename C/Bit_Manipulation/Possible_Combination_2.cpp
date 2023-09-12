/* Generate all possible combination of n bits
 i/p : n = 3
 o/p: 000, 001, 010, 011, 100, 101, 110, 111
 */
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <bitset>
#define NO_OF_BITS 3
using namespace std;

void possible_combination(uint8_t bits);
void possible_combination(uint8_t bits)
{
    uint8_t possible_combinations = pow(2,bits);
    for(uint8_t data =0; data<possible_combinations; data++)
    {
        cout<<bitset<NO_OF_BITS>(data)<<" ";
    }
}

int main()
{
    possible_combination(NO_OF_BITS); 
    return 0;
}
