#include <stdio.h>

int main()
{
    int a[100], n, i, j, x;
    int *p; 

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    p = &a[0]; 
    for (i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                x = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = x;
            }
        }
    }

    printf("The sorted array values are: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    return 0;
}
