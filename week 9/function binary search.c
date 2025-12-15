#include<stdio.h>

int binarySearch(int a[], int n, int key) {
    int low = 0;
    int high = n - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(key == a[mid]) {
            return mid + 1;
        } else if(key > a[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; 
}

int main() {
    int a[100], n, i, key, position;
    printf("Enter Number of elements in array: \n");
    scanf("%d", &n);
    printf("Enter %d Array Elements in sorted order: \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter Key value to search\n");
    scanf("%d", &key);

    position = binarySearch(a, n, key);

    if(position != -1) {
        printf("%d found at position %d\n", key, position);
    } else {
        printf("Sorry! %d not found in given elements\n", key);
    }

    return 0;
}
