#include<stdio.h> 
void selectionSort(int a[], int n)
{
    int i, j, temp, min; 
    for(i=0; i<n-1; i++)
    {
        min=i; 
        for(j=i+1; j<n; j++)
        {
            if(a[min]>a[j]) 
            {
                min=j; 
            }
        }
        if(min!=i) 
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
}

int main()
{
    int a[100], n, i; 
    printf("Enter Number of elements in array: \n");
    scanf("%d", &n); 

    printf("Enter %d Array Elements: \n", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]); 

    selectionSort(a, n); 

    printf("Sorted order of given elements is:\n");
    for(i=0; i<n; i++)
        printf("%d\t", a[i]); 
    printf("\n");

    return 0; 
}

