#include<stdio.h>
int main()
{
    int a[100], n, i, j, flag=0, key;
    printf("Enter Number of elements in array: \n");
    scanf("%d", &n);
    printf("Enter %d Array Elements: \n", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Enter Key value to search\n");
    scanf("%d", &key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("%d found at position %d\n", key, i+1);
    else
        printf("Sorry! %d not found in given elements\n", key);
    return 0;
}
