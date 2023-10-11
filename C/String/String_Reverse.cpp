#include <stdio.h>
#include <string.h>

char *reverseString(char *str) {
    int length = strlen(str);
    int last = length -1;
    for(int i=0; i<length/2; i++)
    {
        char temp = str[i];
        str[i] = str[last];
        str[last] = temp;
        last--;
    }
    return str;
}

int main() {
    char myString[] = "Hello";
    char *upstr;
    printf("Original string: %s\n", myString);
    upstr = reverseString(myString);
    printf("Reversed string: %s\n", upstr);
    
    return 0;
}
