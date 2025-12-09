#include <stdio.h>
int main()
{
    float l, b, area;
    printf("Enter the value of l and b \n");
    scanf("%f %f", &l, &b);
    area = l * b;
    printf("The area of rectangle is %f", area);
    return 0;
}
