/* Single number in array. given an array where every element appears 
twice except for one, find the element using bitwise operations */

#include <iostream>
#include <stdio.h>

using namespace std;
uint8_t find_unique_number(uint8_t *array, uint8_t array_size);
uint8_t find_unique_number(uint8_t *array, uint8_t array_size)
{
    uint8_t result =0;
    for(uint8_t index =0; index<array_size; index++)
    {
        result = result ^ array[index];
    }
    return result;
}

int main()
{
    uint8_t array[5] = {5,2,3,2,5};
    uint8_t array_size = sizeof(array)/sizeof(array[0]);
    uint8_t unique_number = find_unique_number(array, array_size );
    printf("%d", unique_number);
    return 0;
}
