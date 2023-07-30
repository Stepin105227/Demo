// Swapping little endian to big endian or big endian to little endian
#include <iostream>
#include<stdint.h>
using namespace std;
uint32_t swap_endianness(uint32_t num);
uint32_t swap_endianness(uint32_t num)
{
    uint32_t swaped_data,byte_1,byte_2,byte_3,byte_4;
    byte_1 = (num <<24) & 0xFF000000;
    byte_2 = (num <<8) & 0x00FF0000;
    byte_3 = (num >>8) &  0x0000FF00;
    byte_4 = (num >>24) &  0x000000FF;
    printf("\n%x",byte_1);          //78000000
    printf("\n%x",byte_2);          //560000
    printf("\n%x",byte_3);          //3400
    printf("\n%x",byte_4);          //12
    swaped_data = byte_1 |byte_2|byte_3|byte_4;
    printf("\n%x",swaped_data); //78563412
}
int main() {
    uint32_t data = 0x12345678;
    swap_endianness(data);
    return 0;
}
