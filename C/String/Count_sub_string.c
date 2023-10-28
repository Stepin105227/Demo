#include <stdio.h>
#include <string.h>

void count_substring(char *str, char *sub_str);

int main() {
    char *str = "xabcyzabcmvabc";
    char *sub_str = "abc";
    count_substring(str, sub_str);
    return 0;
}

void count_substring(char *str, char *sub_str) {
    int count = 0;
    int len = strlen(str);
    int sub_len = strlen(sub_str);
    for(int i=0;i<len;i++)
    {
        int j;
        for(j=0;j<sub_len;j++)
        {
            if(str[i+j] != sub_str[j])
            {
                break;
            }
        }
        if(j == sub_len)
        {
            count++;
        }
    }
    printf("Count = %d",count);
}
