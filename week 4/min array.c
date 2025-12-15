#include <stdio.h>

int main()
{
    int a[100], i, n, min;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    
    min = a[0];

    
    for (i = 1; i < n; i++) {
        if (min > a[i]) {
            min = a[i];
        }
    }

    printf("The minimum number in the array is: %d\n", min);

    return 0;
}
