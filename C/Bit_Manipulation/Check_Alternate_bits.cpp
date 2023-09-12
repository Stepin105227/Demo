/* Check for alternatr bits. 
i/p : 0b 10101010
o/p : True
 */
#include <iostream>
#include <stdio.h>
using namespace std;

bool checking_alternate_bits(uint8_t data);
bool checking_alternate_bits(uint8_t data)
{
   if(data &(data>>1))
   {
       return false;
   }
   else
   {
       return true;
   }
}

int main()
{
    uint8_t data = 0b10101010;
    bool status = checking_alternate_bits(data); // true
    if(status == 1)
    cout<<"True";
    else
    cout<<"False";
    return 0;
}
