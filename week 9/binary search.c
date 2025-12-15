#include<stdio.h>
int main()
{
int a[100], n, i, high, low, mid, key;
printf("Enter Number of elements in array: \n");
scanf("%d", &n);
printf("Enter %d Array Elements in sorted order: \n", n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter Key value to search\n");
scanf("%d", &key);
low=0;
high=n-1;
while(low<=high) {
mid=(low+high)/2;
if(key==a[mid])
{
printf("%d found at position %d\n", key, mid+1);
break;
}
else if(key>a[mid])
low=mid+1;
else
high=mid-1;
}
if(low>high)
printf ("Sorry! %d not found in given elements\n", key);
return 0;
}
