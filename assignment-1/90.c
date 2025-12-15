#include <stdio.h>

int main() {
    int n, i, j;
    int a[10][10];

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter the matrix elements:\n");
    for (i = 0; i < n; i++)
	  {
        for (j = 0; j < n; j++)
		 {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
	 {
        for (j = i; j < n; j++) 
		{
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    for (i = 0; i < n; i++) 
	{
        int start = 0, end = n - 1;
        while (start < end) 
		{
            int temp = a[i][start];
            a[i][start] = a[i][end];
            a[i][end] = temp;
            start++;
            end--;
        }
    }

    printf("\nMatrix after 90 degree clockwise rotation:\n");
    for (i = 0; i < n; i++) 
	
	{
        for (j = 0; j < n; j++)  {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

