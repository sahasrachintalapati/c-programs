#include <stdio.h>
int main()
{
    int a[6], i;
    printf("Enter the marks of the 6 subjects: ");
    for(i=0; i<6; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Output:\n");
    for(i=0; i<6; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
