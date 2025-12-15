#include <stdio.h>
int minimum(int arr[], int n);
int main()
 {
    int a[100], i, n, res;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    res = minimum(a, n);

    printf("The minimum is %d\n", res);

    return 0;
}
int minimum(int arr[], int n) {
    int min = arr[0];
    int i;
    for( i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
