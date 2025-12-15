#include <stdio.h>
int main()
{
int a[100], n, i, maxsum, currentsum, start = 0, end = 0, j = 0;
printf("enter the size of an array: "); 
scanf("%d", &n);
printf("enter the elements of an array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
maxsum = a[0];
currentsum = a[0];

    for (i = 1; i < n; i++)
    {
        if (currentsum + a[i] < a[i])
        {
            currentsum = a[i];
            j = i; 
        }
        else
        {
            currentsum += a[i];
        }
        if (currentsum > maxsum)
        {
            maxsum = currentsum;
            start = j;
            end = i;
        }
    }

    printf("maximum sum of subarray is %d\n", maxsum);
    printf("starts at index %d and ends at index %d\n", start, end);
 return 0;
}

