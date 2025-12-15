#include <stdio.h>
int palindrome(int x);

int main() {
    int x, res;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    res = palindrome(x);
    if (x == res) {
        printf("%d is palindrome\n", x);
    } else {
        printf("%d is not palindrome\n", x);
    }

    return 0;
}

int palindrome(int x) {
    int rem = 0;
    int rev = 0;
    int original_x = x; 

    while (x > 0) {
        rem = x % 10;
        rev = (rev * 10) + rem;
        x = x / 10;
    }
    return rev;
}
