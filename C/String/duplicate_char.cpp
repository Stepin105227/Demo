// Find out the duplicate char from a string 
#include <stdio.h>
void duplicate_char(char *str);
int main() {
    char *str = "my name is dushyant";
    duplicate_char(str);
    return 0;
}
void duplicate_char(char *str)
{
    char dupicatr[128];
    int k =0;
    int arraydata[128] = {0};
    int length = strlen(str);
    for(int i =0; i<length; i++)
    {
        arraydata[(int)str[i]]++;
    }
    for(int j=0; j<128;j++)
    {
        if(arraydata[j] >1)
        {
            dupicatr[k] = j;
            k++;
            
        }
    }
    printf("%s",dupicatr);
    
}
