#include<stdio.h>
int main()
{
	float a;
	printf("enter the percentage opf the student");
	scanf("%f",&a);
	 if (a > 90)
	  {
        printf("The grade of student is A\n");
    } 
	else if (a<90&&a>= 80)
	 {
        printf("The grade of student is B\n");
    } 
	else if (a<80&&a>= 70) 
	{
        printf("The grade of student is C\n");
    } else if (a<70&&a>= 60) 
	{
        printf("The grade of student is D\n");
    } 
	else if (a<60&&a >= 50)
	 {
        printf("The grade of student is E\n");
    }
	 else 
	 {
        printf("The grade of student is F\n");
    }

    return 0;
}
