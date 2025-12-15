#include <stdio.h>
int percentage(int a[],int n);
int main()
{
int a[6], i, res,n;
printf("Enter the elemente of array");
for(i=0;i<6;i++)
scanf("%d", & a[i]);
res = percentage(a, n);
printf("percentage is %d", res);
return 0;
}
int percentage (int a[],int n)
{ 
int sum=0, per,i;
for (i=0;i<n;i++)
sum = sum +a[i]; 
per = (sum/600)+100;
return per;
}
