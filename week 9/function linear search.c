#include<stdio.h>
int linear_search(int a[], int n, int key);
int main() 
{
    int a[100], n, i, key, position;

    printf("Enter Number of elements in array: \n");
    scanf("%d", &n);

    printf("Enter %d Array Elements: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter Key value to search\n");
    scanf("%d", &key);
    position = linear_search(a, n, key);

    if (position != -1) {
        printf("%d found at position %d\n", key, position + 1);
    } else {
        printf("Sorry! %d not found in given elements\n", key);
    }

    return 0;
}
int linear_search(int a[], int n, int key) {
	int i;
    for( i = 0; i < n; i++) {
        if (a[i] == key) {
            return i;
        }
    }
    return -1;
}
