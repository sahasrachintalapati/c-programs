#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Output:\n");
    for (i = 1; i <= n; i++) 
	{
        if (i % 2 == 0)
		 {
            printf("%d is even\n", i);
        }
        else
        {
        	printf("odd",i);
		}
    }
    return 0;
}
