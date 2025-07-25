//CPFFONUF = ✅ 8. C Program for Factorial of Number Using Function
#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int i, fact = 1;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %d\n", num, factorial(num));
    return 0;
}
