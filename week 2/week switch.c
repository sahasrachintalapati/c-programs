#include <stdio.h>
int main()
{
int day;
printf("Enter 1 for sunday 2 for monday 3 for tuesday 4 for thursday 5 for friday 6 for saturday \n");
scanf("%d", &day);
switch (day)
{
case 1: printf("Sunday"); break;
case 2: printf("Monday"); break;
case 3: printf("Tuesday"); break;
case 4: printf("Wednesday"); break;
case 5: printf("Thursday"); break;
case 6: printf("Friday"); break;
case 7: printf("Saturday"); break;
default: printf("Enter a number of 1-7");
}
return 0;
}
