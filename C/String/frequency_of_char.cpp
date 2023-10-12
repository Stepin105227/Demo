// Find out the frequency of char in a string 
#include <stdio.h>
#include <string.h>
void frequency_of_char(char *str);
int main() {
    char *str = "abadcdabd";
    frequency_of_char(str);
    return 0;
}
void frequency_of_char(char *str)
{
    int length = strlen(str);
    int array[128] = {0};
    for(int i=0; i<length;i++)
    {
        array[(int)str[i]]++;
    }
    for(int j=0;j<128;j++)
    {
        if(array[j]>0)
        {
            printf("%c\t: %d\n",(char)j,array[j] );
        }
    }
}
/*************output***************
a	: 3
b	: 2
c	: 1
d	: 3
*************output*****************/
