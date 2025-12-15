#include <stdio.h>
int fact (int);
int main ()
{
int x, res;
printf ("Enter the value ");
scanf ("%d", &x);
res = fact(x);
printf("res is %d", res);
return 0;
}
int fact (int a)
{
int i, fact = 1;
for (i=1; i<=a;i++)
{
fact = fact*i;
}
return fact;
}
