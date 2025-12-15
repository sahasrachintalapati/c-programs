#include <stdio.h>
int main()
{
    int n, sum = 0, Rem;
printf("Enter the value of n: ");
    scanf("%d", &n);
    while (n != 0) 
    {
        Rem = n % 10;
        sum = sum + Rem;
        n = n / 10;
    }
	  printf("The sum of digits is%d\n");
	  return 0;
}
