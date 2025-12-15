#include <stdio.h>
void subjectmarks(int a[], int n) {
    int i;
    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Subject marks are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int a[6];
    int size = 6;
    subjectmarks(a, size);
    return 0;
}
