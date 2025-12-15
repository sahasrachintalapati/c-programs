#include <stdio.h>

int max (int a[], int n);

int main()
{
    int n, arr[100], i, res;
    printf ("Enter the size of array: ");
    scanf("%d", &n);
    printf ("Enter the elements in the array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    res = max(arr, n);
    printf("The maximum is %d", res);
    return 0; 
}

int max (int a[], int n)
{
    int i, maximum;
    maximum = a[0];
    for(i=0; i<n; i++)
    {
        if (a[i] > maximum)
        {
            maximum = a[i];
        }
    }
    return maximum;
}
