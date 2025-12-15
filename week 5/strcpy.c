#include <stdio.h>
#include <string.h>
int main()
{
    char st1[30], st2[30];
    printf("Enter String 1 to read");
    gets(st1);
    printf("Enter string 2 to read");
    gets(st2);
    strcpy(st1,st2);
    printf("The copy of string is %s", st2);
    return 0;
}
