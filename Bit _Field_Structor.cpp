// Bit field structor for display configuration
#include <stdio.h>
#include <stdint.h>
struct Bit_field_struct {
    uint8_t  mode : 2;          // 2 bits for mode
    uint8_t  brightness : 2;    // 2 bits for brightness
    uint8_t  flag : 1;         // 1 bits for contrast
    uint8_t  colorMode : 3;    // 3 bits for colorMode  
};

int main() {
   
    struct Bit_field_struct bit_field_set;
    printf("sizeof: %u\n", sizeof(Bit_field_struct));
    
    bit_field_set.mode = 3;            // 3 (binary: 11)
    bit_field_set.brightness = 2;      // 2 (binary: 10)
    bit_field_set.flag = 1;            // 1 (binary: 1)
    bit_field_set.colorMode = 5;       // 5 (binary: 101)
    
    printf("mode: %u\n", bit_field_set.mode);
    printf("Brightness: %u\n", bit_field_set.brightness);
    printf("flag: %u\n", bit_field_set.flag);
    printf("Color Mode: %u\n", bit_field_set.colorMode);

    return 0;
}
