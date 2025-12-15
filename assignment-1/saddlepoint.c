#include <stdio.h>
int main() 
{
    int a[3][3], i, j, k, min, col;
    printf("enter the elements of array");
     for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
			for (i = 0; i < 3; i++)
	 {
        min = a[i][0];
        col = 0;
     for (j = 1; j < 3; j++)
            if (a[i][j] < min)
			 {
                min = a[i][j];
                col = j;
            }
       for (k = 0; k < 3; k++)
              if (a[k][col] > min)
                break;

        if (k == 3) {
            printf("Saddle Point = %d", min);
            return 0;
        }
    }
	printf("No Saddle Point");
    return 0;
}



