#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    int i;
    if (num <= 1) return 0;

    for (i = 2; i < num; i++) {
        if (num % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

int main() {
    int i;

    printf("Prime numbers between 1 and 100 are:\n");

    for (i = 1; i <= 100; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }

    return 0;
}
