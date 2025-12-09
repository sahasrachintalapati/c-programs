#include<stdio.h>
int main()
{
    int C,F;
    printf("Enter the value of C \n");
    scanf("%d", &C);
    F = C * (9/5) + 32;
    printf("The value of temperature in Fahrenheit = %d\n", F);
    return 0;
}
