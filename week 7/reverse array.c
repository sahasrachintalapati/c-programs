#include<stdio.h>
void reverse(int a[], int n);
int main()
{
int n,i, arr[100];
printf("Enter the size of array");
scanf("%d",&n);
printf("Enter the elements in the array");
for(i=0;i<n; i++)
scanf("%d", &arr[i]);
reverse(arr, n);
printf("reverse is %d");
}
void reverse(int a[],int n)
{
int i;
for(i=n-1; i>=0;i--)
printf("%d", a[i]);
}
