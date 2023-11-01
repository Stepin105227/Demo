/*In the above example, the init function is marked with the __attribute__((constructor)) attribute, which tells
the GCC compiler to execute this function before main. This is a GCC-specific feature, and other compilers may have 
different mechanisms for achieving a similar result.
Keep in mind that such features are not part of the C or C++ standard and are compiler-specific extensions. Using 
them ties your code to a specific compiler, which may not be portable across different toolchains. Therefore, 
you should use such features judiciously, considering the portability and maintainability of your code. */

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
