
#include <stdio.h>
#include <string.h>

void largest_palindrom(char *str);
void max_length(char *str,int left, int right,int *max_len,int *start,int *last);

int main() {
    char *str1 = "abcdcbs";
    largest_palindrom(str1);
    printf("\n");
    char *str2 = "xyabccbam";
    largest_palindrom(str2);
    return 0;
}

void largest_palindrom(char *str)
{
    int str_len = strlen(str);
    int start =0,last =0;
    int max_len =1;
    
    for(int i=0;i<str_len-1;i++)
    {
        int left = i;
        int right =i;
        max_length(str,left,right,&max_len,&start,&last);
    
        left = i;
        right =i+1;
        max_length(str,left, right,&max_len,&start,&last);
    }
    for(int k=start; k<=last ;k++ )
    {
        printf("%c",str[k]);
    }
}



void max_length(char *str,int left, int right,int *max_len,int *start,int *last)
{
    int str_len = strlen(str);
     while(left>=0 && right<str_len)
    {
        if(str[left] == str[right])
        {
            left--;
            right++;
        }
        else
        {
            break;
        }
    }
    int len = right-left-1;
    if(len > *max_len)
    {
        *max_len = len;
        *start = left+1;
        *last = right -1;
    }  
}
