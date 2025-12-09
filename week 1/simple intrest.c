#include <stdio.h>
int main()
{
    float P, T, R, S;
    printf("Enter the value of P, R, T\\n");
    scanf("%f %f %f", &P, &R, &T);
    S = (P * R * T) / 100;
    printf("The simple interest is %f", S);
    return 0;
}
