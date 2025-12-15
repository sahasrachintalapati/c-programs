#include <stdio.h>

int main() {
    int marks[6], i, sum = 0;
    float percentage;

    printf("Enter the marks of 6 subjects (out of 100 each):\n");
    for (i = 0; i < 6; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum = sum + marks[i];
    }
    percentage = (sum / 600 )* 100;
    printf("Percentage: %f", percentage);

    return 0;
}
