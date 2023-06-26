#include <iostream>
#include <stdio.h>
#include <bitset>
using namespace std;

#define CLEAR(data,pos) (data &= ~(1<<pos))
#define SET(data,pos) (data |= (1<<pos))

int main() {
    int data = 0x12;
    bitset<8>y(data);
    cout<<y<<"\n";
    //data |= (1<<2);
    SET(data,2);
    bitset<8>x(data);
    cout<<x<<"\n";
    //data &= ~(1<<2);
    CLEAR(data,2);
    bitset<8>m(data);
    cout<<m<<"\n";
    return 0;
}
