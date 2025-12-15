#include <stdio.h>

int main() {
    int a[100], n, i;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    printf("Enter the values of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Reversed values of the array:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    return 0;
}
