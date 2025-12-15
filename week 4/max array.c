#include <stdio.h>
int main()
 {
    int a[100], n, i, max;

    printf("Enter the size of an array: ");
    scanf("%d", &n);

    printf("Enter %d elements:", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    
    max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
}

    printf("Maximum number is: %d", max);

    return 0;
}
