#include <stdio.h>
int trace(int a[][10], int n) {
    int i, j, sum = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                sum = sum + a[i][j];
            }
        }
    }
    return sum;
}

int main() {
    int n, i, j, t, a[10][10];
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter elements of array:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    t = trace(a, n);
    printf("Trace is: %d\n", t);
    return 0;
}
