#include <stdio.h>
int primenumber(int x);
int main ()
{
    int x, res, count;
    printf("Enter the value of x");
    scanf("%d", &x);
    res = primenumber(x);
    if (count == 2)
    printf ("prime number");
    else
    {
        printf(" Not prime number");
    }
}
int primenumber(int x)
{
    int count, i;
    for(i=0; i<=x; i++)
    {
        if (x % i == 0)
        count ++;
    }
    return count;
}
