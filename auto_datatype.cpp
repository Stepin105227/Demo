/* 
auto keyword: The auto keyword specifies that the type of the variable that is being declared will 
be automatically deducted from its initializer
*/
#include <iostream>
#include <stdint.h>
void add(auto x, auto y);
void addstring(auto x, auto y);

void addstring(auto *x, auto *y)
{
    while(*x == '\0')
    {
        std::cout <<"\nSum : "<<(*x+*y);
    }
}

void add(auto x, auto y)
{
    std::cout <<"\nSum : "<<(x+y);
}
int main() {
    uint8_t a[3] = "AB";
    uint8_t b[3] = "CD";
    add(2,3);
    add(2.5,3);
    add('A','B');
    addstring(a,b);
    return 0;
}
