#include<stdio.h>
void bubbleSort(int a[], int n) {
    int i, j, temp;
    for(i=0; i<n-1; i++) {
        for(j=0; j<n-i-1; j++) {
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main() {
    int a[100], n, i;
    printf("Enter Number of elements in array: \n");
    scanf("%d", &n);
    printf("Enter %d Array Elements:\n", n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    bubbleSort(a, n);

    printf("Sorted order of given elements is:\n");
    for(i=0; i<n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}
