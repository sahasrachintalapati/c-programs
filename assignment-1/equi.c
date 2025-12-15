#include <stdio.h>

int main() 
{
    int a[100], n, i;
    int leftSum = 0, totalSum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of the array: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
        totalSum += a[i]; 
    }

    for (i = 0; i < n; i++)  
    {
        totalSum -= a[i];    

        if (leftSum == totalSum)  
        {
            printf("Equilibrium Index = %d\n", i);
            return 0;   n
        }

        leftSum += a[i];
    }

    printf("No Equilibrium Index found\n");
    return 0;
}


