#include <stdio.h>
int main()
 {
    int a, b, c;
    int *p, *q, *r;
    p = &a;
    q = &b;
    r = &c;
    printf("Enter the two values:\n");
    scanf("%d%d", &a, &b);
    *r = *p + *q;
    printf("The sum is %d\n", c);
    return 0;
}
