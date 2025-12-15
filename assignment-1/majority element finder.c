    #include<stdio.h>
int main()
{
	int a[100],i,x=0,count=0,n;
	printf("enter the size of an array");
	scanf("%d",&n);
	printf("enter the elements in the array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		while(count==0)
		{
			x=a[i];
			count=1;
		}
		 if(a[i]==x)
		{
			count++;
		}
		else
		{
			count--;
		}
	}
	if(count>n/2)
	{
		printf("majority element is %d/n",x);
	}
	else
	{
		printf("majority element is not found/n");
	}
	return 0;	
}
