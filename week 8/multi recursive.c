#include <stdio.h>

int multi(int a, int b);

int main() {
    int a, b, res;
    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);
    res = multi(a, b);
    printf("Multiplication is %d", res);
    return 0;
}

int multi(int x, int y) {
    if (y == 1) {
        return x;
    } else {
        return x + multi(x, y - 1);
    }
}
