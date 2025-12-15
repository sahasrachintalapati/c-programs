#include <stdio.h>
int add (int, int);
int main()
{
int x, y, sum;
printf("Enter the values \n");
scanf ("%d %d", &x,&y);
sum = add(x,y);
printf("the sum is %d", sum);
return 0;
}
int add (int a, int b)
{
int c;
c = a + b;
return c;
}
