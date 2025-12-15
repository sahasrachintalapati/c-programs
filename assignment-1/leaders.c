#include <stdio.h>
int main() 
{
    int a[100], n, i, max;
    printf("Enter size of array: ");
    scanf("%d", &n);
printf("Enter array elements: ");
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
}
    max = a[n - 1];
    {
    printf("Leaders: %d ", max);
}

    for (i = n - 2; i >= 0; i--)
	 {
        if (a[i] > max)  
		 {
           max = a[i];
            printf("%d ", max);
        }
    }
    
	return 0;
}

