#include <stdio.h>
#include <string.h>
void updated_string(char *str);
int main() {
    char str[] = "MY name Is dushyant";
    printf("\nupdated string = %s",str);
    updated_string(str);
    return 0;
}
void updated_string(char *str)
{
    int len = strlen(str);
    int flag =1;
    for(int i =0; i<len; i++)
    {
        if(str[i] == ' ')
        {
            flag =1;
        }
        else
        {
            if(flag)
            {
                if(str[i] >='A' && str[i]<='Z')
                {
                  str[i] = str[i] + ('a'-'A');  
                }
                else if(str[i] >='a' && str[i]<='z')
                {
                    str[i] = str[i] - ('a'-'A');
                }
                flag = 0;
          }
        }
    }
    //"mY Name is Dushyant";
    printf("\nupdated string = %s",str);
}
