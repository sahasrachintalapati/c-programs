#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n, i, sum = 0;
    int *p;
printf("Enter size of array: ");
    scanf("%d", &n);
    p = (int*) calloc(n, sizeof(int));

    if (p == NULL) 
	{
        printf("Memory error!!\n");
        return 0;
    } else {
        printf("Enter the elements:\n");
        for (i = 0; i < n; i++) {
            scanf("%d", (p + i));
            sum += *(p + i); 
        }
        printf("Sum of elements: %d\n", sum);
    }
    free(p);
    return 0;
}
