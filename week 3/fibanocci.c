#include <stdio.h>

int main()
{
    int n, i, f, s, t;

    printf("Enter the value of n");
    scanf("%d", &n);

    f = 0;
    s = 1;

    printf("%d %d", f, s);

    for (i = 1; i <= n; i++)
    {
        t = f + s;
        printf(" %d", t);
        f = s;
        s = t;
    }

    return 0;
}
