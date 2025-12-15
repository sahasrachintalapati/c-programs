#include <stdio.h>
int main()
{
int a[100], i, n;
int *p = &a[0];
printf ("Enter size of array");
scanf("%d",&n);
printf ("Enter elements of array");
for (i=0; i<n; i++)
{
scanf("%d", (p+i));
}
printf ("The elements in array is %d", *(p+i));
return 0;
}

