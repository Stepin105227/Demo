#include <stdio.h>

typedef struct {
   int dataType;  
   union {
        int intValue1;
        int intValue2;
        int intValue3;
        float floatValue;
    } value;
} Data;

int main() {
    Data data1;
    printf("Size %d\n",sizeof(Data));
    printf("Size %d\n",sizeof(data1.value));
    return 0;
}
