#include<stdio.h>
int main ()
{
float a,b,c;
printf("Enter the values of a,b,c");
scanf("%f%f%f", &a, &b, &c);
if ((a==b)&&(b==c)&&(c==a))
printf ("The given sides form equilateral triangle");
if ((a==b)||(b==c)||(c==a))
{
printf("The given sides form isoceles triangle");
}
else
{
printf("the given sides form scalene triangle");
}
return 0;
}
