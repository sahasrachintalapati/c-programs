#include <stdio.h>
int reverse_of_number(int x);

int main() {
    int x, res;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    res = reverse_of_number(x);
    printf("Result is %d\n", res);
    return 0;
}
int reverse_of_number(int x) {
    int rev = 0, rem = 0;
    while (x != 0) {
        rem = x % 10;
        rev = (rev * 10) + rem;
        x = x / 10;
    }
    return rev;
}
