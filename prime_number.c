#include <stdio.h>

void prime_checking(int n) {
    int flag = 0; // 0 means prime

    if (n <= 1) {
        flag = 1;  // not a prime
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                flag = 1; // not a prime
                break;     // Break out of the loop as soon as a divisor is found
            }
        }
    }

    if (flag == 0) {
        printf("\n%d is a prime number\n", n);
    } else {
        printf("\n%d is not a prime number\n", n);
    }
}

int main() {
    int n = 4;
    prime_checking(n);
    return 0;
}
