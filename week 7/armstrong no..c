#include <stdio.h>
int Armstrongnumber(int x)
{
    int sum = 0, rem = 0;
    while (x > 0)
    {
        rem = x % 10;
        sum = sum + (rem * rem * rem);
        x = x / 10;
    }
    return sum;
}

int main()
{
    int x, res;
    printf("Enter the value of x");
    scanf("%d", &x);
    res = Armstrongnumber(x);
    if (res == x)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not Armstrong number");
    }
    return 0;
}
