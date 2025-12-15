#include <stdio.h>

int main()
{
    int a[100], i, even= 0, odd = 0, n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the values of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even number count is %d", even);
    printf("Odd number count is %d", odd);

    return 0;
}
