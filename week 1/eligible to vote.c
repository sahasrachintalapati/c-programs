#include <stdio.h>
int main()
{
int a;
printf ("Enter the age \n");
scanf("%d", &a);
if(a>=18)
{
printf("a is eligible to vote \n");
}
else
{
printf ("a is not eligible to vote \n");
}
return 0;
}
