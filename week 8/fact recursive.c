#include <stdio.h>
int factorial(int n);

int main() {
    int n, result;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = factorial(n);
        printf("The factorial of %d is %d\n", n, result);
    }

    return 0;
}
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
