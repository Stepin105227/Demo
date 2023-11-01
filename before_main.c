#include <stdio.h>

void init(void) __attribute__((constructor));

void init(void) {
    int a =10;
    int b = 20;
    // This function will be executed before main
    printf("Initialization code = %d\n",(a+b));
    
}

int main() {
    printf("Main function\n");
    return 0;
}
