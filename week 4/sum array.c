#include <stdio.h>

int main()
{
    int a[100], i, n, sum = 0;

    printf("Enter the size of an array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        sum = sum + a[i];
    }

    printf("The sum is: %d\n", sum);

    return 0;
}
