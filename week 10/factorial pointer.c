#include <stdio.h>

int main() {
    int a, i, fact;
    int *p, *q;

    p = &a;
    q = &fact;
    *q = 1; 

    printf("Enter the value of a: ");
    scanf("%d", p); 

    for (i = 1; i <= *p; i++) 
	{ 
        *q = *q * i; 
    }

    printf("The factorial is %d\n", *q); 
return 0;
}
