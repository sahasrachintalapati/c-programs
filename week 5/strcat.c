#include <stdio.h>
#include <string.h>

int main()
{
    char st1[30], st2[30];

    printf("Enter the string 1 to read");
    gets(st1);

    printf("Enter the string 2 to read");
    gets(st2);

    strcat(st1, st2);

    printf("The string is", st1);

    return 0;
}
