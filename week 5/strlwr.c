#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "HELLO World";
    
    printf("Original string is %s", str);
    strlwr(str);
    printf("Lowercase string is %s\n", str);
 return 0;
}
