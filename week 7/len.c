#include <stdio.h>
int length (char st[ ]);
int main()
{
char str[30];
int res;
printf ("Enter the string to read");
gets(str);
res = length (str);
printf(" The length of string is %d", res);
return 0;
}
int length(char st[])
{
int length = 0, i;
for( i=0 ; st[i] != '\0' ; i++)
length++;
return length;
}
