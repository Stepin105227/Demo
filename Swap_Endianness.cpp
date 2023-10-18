// Swapping little endian to big endian or big endian to little endian
#include <stdio.h>
#include <stdint.h>
uint32_t swaping_endian(uint32_t data)
{
    uint32_t updated_data =0;
    updated_data |= (data & 0x000000FF)<<24;
    updated_data |= (data & 0x0000FF00)<<8;
    updated_data |= (data & 0x00FF0000)>>8;
    updated_data |= (data & 0xFF000000)>>24;
    return updated_data;
}
int main() {
    uint32_t data = 0x11223344;
    printf("\n%x",data);
    uint32_t updated_data = swaping_endian(data);
    printf("\n%x",updated_data);
    return 0;
}
