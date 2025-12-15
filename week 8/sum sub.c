#include <stdio.h>
int sumofsubjects(int a[], int n);
int main() {
    int n, i, marks[100], res;

    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    printf("Enter the marks of the subjects:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    res = sumofsubjects(marks, n);

    printf("Sum of subjects is %d\n", res);
 return 0;
}
int sumofsubjects(int a[], int n) {
    int sum = 0, i;
    for (i = 0; i < n; i++) {
        sum = sum + a[i];
    }
    return sum;
}
