#include <stdio.h>
void multiplication_table(int x) {
    int i, a;
    for (i = 1; i <= 10; i++) {
        a = x * i;
        printf("%d * %d = %d\n", x, i, a);
    }
}

int main() {
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    multiplication_table(x); 
    return 0;
}
