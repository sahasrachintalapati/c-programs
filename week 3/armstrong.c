#include <stdio.h>

int main() {
    int n, sum = 0, Rem, x;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    x = n;

    while (n > 0) {
        Rem = n % 10;
        sum = sum + (Rem * Rem * Rem);
        n = n / 10;
    }

    if (x == sum) {
        printf("%d is an Armstrong number", x);
    } else {
        printf("%d is not an Armstrong number", x);
    }

    return 0;
}
