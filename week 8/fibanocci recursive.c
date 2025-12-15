#include<stdio.h>
int fibanocci (int n);
int main()
{
int n, res;
printf("Enter the value of n: ");
scanf("%d", &n);
res = fibanocci(n);
printf("The fibanocci is %d", res);
return 0;
}
int fibanocci(int n)
{
int x;
if (n==0 || n==1)
return n;
else
return fibanocci(n-1)+fibanocci(n-2);
}
