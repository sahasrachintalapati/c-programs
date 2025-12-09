#include <stdio.h>

int main() {
    int n;
    int i = 1; 
printf("Enter the value of n: "); 
scanf("%d", &n);
do 
{
        printf("%d\n", n); 
        i++;
    } while (i <= n);

    return 0;
}
