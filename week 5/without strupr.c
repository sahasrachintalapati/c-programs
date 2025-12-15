#include <stdio.h>
#include <string.h> 

int main()
{
    int i;
    char st[30];
    printf("Enter the string to read: ");
    scanf("%s", st); 

    for (i = 0; st[i] != '\0'; i++)
    {
        if (st[i] >= 'a' && st[i] <= 'z')
        {
            st[i] = st[i]-32; 
        }
    }

    printf("Output: %s\n", st);
    return 0;
}
