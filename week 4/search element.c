#include <stdio.h>

int main() {
    int a[100], s, n, i;

    printf("Enter the size of an array: ");
    scanf("%d", &n);

    printf("Enter the values of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &s);

    for (i = 0; i < n; i++) {
        if (s == a[i]) {
            printf("The position of %d is %d ", s);
            break;
        }
    }

    if (i == n) {
        printf("%d is not found in the array.\n", s);
    }

    return 0;
}
