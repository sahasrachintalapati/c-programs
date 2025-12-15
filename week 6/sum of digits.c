#include <stdio.h>
int sumofdigits (int x);
int main()
{
    int x, res;
    printf("Enter the value of x");
    scanf("%d", &x);
    res = sumofdigits(x);
    printf("sum is %d", res);
    return 0;
}
int sumofdigits (int x)
{
    int sum=0, rem=0;
    while (x>0)
    {
        rem = x%10;
        sum = sum + rem;
        x = x/10;
    }
    return sum;
}
