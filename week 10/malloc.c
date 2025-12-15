#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i;
	int *p;
 printf("Enter size of array: ");
    scanf("%d", &n);
    p = (int*) malloc(n * sizeof(int));

    if (p == NULL) {
        printf("Memory error!!\n");
        return 0;
    }

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", (p + i));
    }
    printf("The elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
    free(p);

    return 0;
}
