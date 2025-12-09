#include<stdio.h>
int main()
{
float n, d, div;
printf("Enter the value of n and d \n");
scanf("%f %f", &n, &d);
if (d != 0)
{
div = n / d;
printf(" The division is %f", div);
}
return 0;
}
