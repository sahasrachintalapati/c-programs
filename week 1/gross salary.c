#include <stdio.h>

int main() {
    float B, T, D, GS;
    printf("Enter the Basic Pay: ");
    scanf("%f", &B);
    T = 0.10 * B;
    D = 0.15 * B;
    GS = B + T + D;
    printf("Gross Salary: %f\n", GS);
	 return 0;
}
