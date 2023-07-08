#include <iostream>
#include <stdio.h>
#include <bitset>
using namespace std;

#define CLEAR(data,pos)   (data &= ~(1<<pos))
#define SET(data,pos)     (data |= (1<<pos))
#define TOGGLE(data,pos)  (data ^= (1<<pos))

int main() {
    int data = 0x12;
    bitset<8>y(data);
    cout<<"DATA:    "<<y<<"\n";
    //data |= (1<<2);
    SET(data,2);
    bitset<8>x(data);
    cout<<"SET:     "<<x<<"\n";
    //data &= ~(1<<2);
    CLEAR(data,2);
    bitset<8>m(data);
    cout<<"CLEAR:   "<<m<<"\n";
    
    TOGGLE(data,2);
    bitset<8>n(data);
    cout<<"TOGGLE:  "<<n<<"\n";
    TOGGLE(data,2);
    bitset<8>n1(data);
    cout<<"TOGGLE:  "<<n1<<"\n";
    
    return 0;
}
/****** output ******
DATA:    00010010
SET:     00010110
CLEAR:   00010010
TOGGLE:  00010110
TOGGLE:  00010010
*********************/
