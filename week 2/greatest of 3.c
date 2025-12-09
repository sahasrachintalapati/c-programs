#include <stdio.h>
int main() {
    float a, b, c;
    printf("Enter the value of a, b, c:\\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a >= b && a >= c)
	 {
        printf("a is greatest: %f\n", a);
    } 
	else if (b >= a && b >= c)
	 {
        printf("b is greatest: %f\n", b);
    }
	 else
	  {
        printf("c is greatest: %f\n", c);
    }

    return 0;
}
