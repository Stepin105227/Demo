
#include <stdio.h>
#include <string.h>
void checking_palingdrom(char *str);
int main() {
    char str[10]; //= "radar";
    printf("\n Please Enter the string");
    scanf("%s",&str);
    checking_palingdrom(str);
    return 0;
}

void checking_palingdrom(char *str)
{
    char temp_str[10];
    int length = strlen(str);
    for(int k=0;k<length;k++)
    {
        temp_str[k] =str[k];
    }
    int last = length-1;
    for(int i=0; i<length/2;i++)
    {
        char temp_char = str[i];
        str[i] = str[last];
        str[last] = temp_char;
        last--;
    }
    if(*temp_str != *str)
    {
        printf("\n this is not  a Palindrom");
    }
    else
    {
        printf("\n this is  a Palindrom");
    }
}
