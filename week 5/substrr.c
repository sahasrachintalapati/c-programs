#include <stdio.h>
int main()
{
    char str[100], substr[30];
    int i, j;
    printf("Enter the string \n");
    gets(str);
    printf("Enter substring to find position of string\n");
    gets(substr);
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; substr[j] != '\0'; j++)
        {
            if (str[i + j] != substr[j])
                break;
        }
        if (substr[j] == '\0')
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}
