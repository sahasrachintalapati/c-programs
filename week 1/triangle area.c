#include <stdio.h>
int main()
{
    int b, h, area;
    printf("Enter the value of h and b\n");
    scanf("%d %d", &h, &b);
    area = 1/2 * (b * h); 
    printf("The area of triangle is %d", area);
    return 0;
}
