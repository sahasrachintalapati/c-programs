#include <stdio.h>
char main()
{
char Ch;
printf("Enter the alphabet");
scanf("%c", &Ch);
switch (Ch)
{
case 'a':
printf("It is a vowel \n");
break;
case 'e':
printf("It is a vowel \n");
break;
case 'i':
printf("It is a vowel \n");
break;
case 'o':
printf("It is a vowel \n");
break;
case 'u':
printf("It is a vowel \n");
break;
default: printf("it is a consonant\n");
}
return 0;
}
