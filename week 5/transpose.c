#include <stdio.h>

int main()
{
    int a[3][3], i, j;

    printf("Enter the values for the 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The transpose of the matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[j][i]); 
        }
        printf("\n");
    }

    return 0;
}
