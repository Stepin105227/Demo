#include <iostream>
#include <stdio.h>
#include <math.h>
#include <bitset>
#define NO_OF_BITS 3
using namespace std;

void possible_combination(uint8_t *array, uint8_t limits);
void possible_combination(uint8_t *array, uint8_t limits)
{
    for(uint8_t data =0; data<limits; data++)
    {
        array[data] = data;
    }
}

int main()
{
    uint8_t *array = nullptr;
    uint8_t limit = pow(2,NO_OF_BITS);
    
    array = ( uint8_t *)malloc(NO_OF_BITS*sizeof(uint8_t));
    possible_combination(array,limit );
    for(int i =0; i<limit;i++)
    {
        cout<<bitset<NO_OF_BITS>(array[i])<<" ";
    }
    free(array);
    array = NULL;
    return 0;
}
