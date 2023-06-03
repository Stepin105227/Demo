// check endianness of the system
#include <iostream>
using namespace std;
void checking_endianness(char *);
void checking_endianness(char *ptr)
{
    if(ptr[0] == '\x44' && ptr[1] == '\x33' && ptr[2] == '\x22' && ptr[3] == '\x11')
    {
       std::cout << "Little endian"; 
    }
    else if(ptr[0] == '\x11' && ptr[1] == '\x22' && ptr[2] == '\x33' && ptr[3] == '\x44')
    {
        std::cout << "Big endian"; 
    }   
}

int main() {
    int data = 0x11223344;
    char *ch_ptr = (char*)&data;
    checking_endianness(ch_ptr);
    return 0;
}
