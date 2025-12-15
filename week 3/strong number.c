#include <stdio.h>

int main() {
    int n, sum = 0, rem, x, fact=1, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    x = n; 

    while (n > 0) {
        rem = n % 10;
 for (i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if (sum == x) {
        printf("%d is a strong number", x);
    } else {
        printf("%d is not a strong number", x);
    }

    return 0;
}
