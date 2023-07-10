// find out MSB bit
#include <stdio.h>
#include <stdint.h>
int main() {
    uint8_t x = 10;  // Binary: 00001010
    int msbPosition = 7; 
    while(x >> msbPosition == 0)
    {
       msbPosition--; 
    }
    uint8_t msb = (x>>msbPosition) & 1;
    printf("POS = %d and msb_bit = %d",msbPosition,msb);
    return 0;
}
