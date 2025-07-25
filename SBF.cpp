//SBF = sum by formula

#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    sum = (n * (n + 1)) / 2;

    printf("Sum using formula = %d\n", sum);
    return 0;
}
