#include <stdio.h>
int main()
 {
    int F, C;
    printf("Enter the value of F\n");
    scanf("%d", &F);
    C = (F - 32) * 5 / 9;
    printf("The temperature in celsius = %d", C);
    return 0;
}
