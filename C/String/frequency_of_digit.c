//frequency of each digit from 0 to 9
#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 
    printf("Enter a string: ");
    scanf("%s", str); 
    int len = strlen(str);
    printf("Length is = %d\n", len);
    for (int i = 0; i < 10; i++) {
        int sum = 0;
        for (int j = 0; j < len; j++) {
            if (i == str[j] - '0')
                sum++;
        }
        printf("%d ", sum);
    }

    return 0;
}

