#include <stdio.h>
int main() {
    int a[100],n, i, j, found;
    printf("enter the size of the array");
    scanf("%d",&n);
	 for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
		for (i = 1; i<n; i++)
		 {
        found = 0;
        for (j = 0; j <n; j++) 
		{
            if (a[j] == i)
			 {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d", i);
            break;
        }
    }
	 return 0;
}

