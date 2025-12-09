#include <stdio.h>

int main() {
    int a, b, c;
    char operator;

    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            c = a + b;
            printf("Addition is %d\n", c);
            break;
        case '-':
            c = a - b;
            printf("Subtraction is %d\n", c);
            break;
        case '*':
            c = a * b;
            printf("Multiplication is %d\n", c);
            break;
        case '/':
                c = a / b;
                printf("Division is %d\n", c);
            break;
        default:
            printf("operator not found\n");
    }

    return 0;
}
