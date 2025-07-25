#include <stdio.h> 

int main() {
    // 5. Print Prime Numbers from 1 to 100 Using Nested Loops
    
    int i;
    int j;
    int isPrime;

    printf("Prime numbers between 1 and 100 are:\n");

    for(i = 2; i <= 100; i++) {
        isPrime = 1; // Assume number is prime

        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }

        if(isPrime == 1)
            printf("%d ", i);
    }
    
    return 0;
}
 