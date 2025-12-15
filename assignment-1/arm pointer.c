#include<stdio.h>
#include<stdlib.h>
int armstrong(int n);
int main()
{
	int n,sum=0,rem=0,x;
	int *p=&n;
	int*pt=x;
	printf("enter the value of n");
	p=(int*)malloc(n*sizeof(int));
	*pt=*p;
	rem=*p%10;
	sum=sum+(rem*rem*rem);
	*p=*p/10;
	if(*pt==*p)
	{
		printf("armstrong number",*pt);
	}
	else
	{
		printf("not armstrong number");
	}
	return 0;
}
