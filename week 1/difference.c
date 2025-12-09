#include <stdio.h>

int main() {
    int a, b, sub;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    sub = a - b;
    printf("The subtraction is %d\n", sub);
    return 0;
}
