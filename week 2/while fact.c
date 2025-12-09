#include <stdio.h>
int main()
{
    int i, n, fact = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    i = 1; 
    while (i <= n) 
    {
        fact = fact * i;
        i++;
    }
    printf("The fact is %d", fact);
    return 0;
}
