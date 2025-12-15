#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "ENGINEERING";
    
    printf("Original string is %s", str);
    strupr(str);
    printf("uppercase string is %s\n", str);
    return 0;
}
