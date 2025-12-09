#include<stdio.h>
#include<math.h>
int main ()
{
float P,R,T,n,A,B,C,t;
printf("Enter the values of P,R,T,n\n");
scanf("%f %f %f %f", &P, &R, &T, &n);
A=P*(1+R/n);
B = n*t;
C=pow(A,B);
printf(" The compound intrest is%f", C);
return 0;
}
