#include <stdio.h>

unsigned long long factorial(int n);
int main() {
    int n = 10;
    unsigned long long result =0;
    if(n<0)
    {
        printf("\nInvalid input");
    }
    else{
    result = factorial(n);
    printf("Factorial of %d is %llu\n", n, result);
    }
    return 0;
}

unsigned long long factorial(int n)
{
    if(n==0)
    return 1;
    else
    {
        return (n*factorial(n-1));
    }
}
