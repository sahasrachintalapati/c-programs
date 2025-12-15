#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30], str2[30];

    printf("Enter string 1 to read: ");
    gets(str1);

    printf("Enter string 2 to read: ");
    gets(str2);
    if (strcmp(str1, str2) == 0)
    {
        printf("They are equal\n");
    }
    else
    {
        printf("They are not equal\n");
    }

    return 0;
}
