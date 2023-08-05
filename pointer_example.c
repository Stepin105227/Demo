#include <stdio.h>
int main() {
    int a = 10;
    int b = 10;
    int c = 10;
    int d = 20;
    const int *ptr1 = &a; //pointer to constant integer
    ptr1 = &b; // allow
   // *ptr1 = 11; // not allow
    int *const ptr2 = &b; //constant pointer to integer
   // ptr2 = &c;//not allow
   *ptr2 = 12; // alow
    const int * const ptr3 = &c; //constant pointer to constant integer
   // *ptr3 = 55; not allow
   // ptr3 = &d; //not allow
    return 0;
}
