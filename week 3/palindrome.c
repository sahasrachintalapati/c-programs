#include <stdio.h>

int main()
{
int n, rev = 0, Rem, x;
printf("Enter the value of n: ");
    scanf("%d", &n);
x=n; 
	 while (n > 0)
    {
        Rem = n % 10;
        rev = (rev * 10) + Rem;
        n = n / 10;
    }

    if (x == rev)
    {
        printf("%d is a palindrome number", x);
    }
    else
    {
        printf("%d is not a palindrome number");
    }

    return 0;
}
