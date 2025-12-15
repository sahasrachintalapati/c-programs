#include <stdio.h>
#include <string.h>

int main()
{
    char st[30];
    int length;
    printf("Enter String to read");
    gets(st);
    length = strlen(st);
    printf("The length of string is %d\n", length);
    return 0;
}
