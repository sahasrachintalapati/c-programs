#include <stdio.h>
int main()
{
    int n, i, x, sum = 0, rem;
    printf("Enter the value of n");
    scanf("%d", &n);
    x = n;

    for (i = 1; i < n; i++)
    {
        if (x % i == 0)
            printf("prime number");
        else
        {
            printf("Not prime number");
        }
    }
    return 0;
}
