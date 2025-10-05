#include <stdio.h>
#include <math.h>
int main() {
    float p = 0.00;
	float  r = 0.00;
	int n = 0; 
	int t = 0;
	float A = 0.00;
    printf("Enter principal amount (p): ");
    scanf("%f", &p);
    printf("Enter annual interest rate (r in decimal, e.g. 0.1 for 10%): ");
    scanf("%f", &r);
    printf("Enter number of times interest applied per year (n): ");
    scanf("%d", &n);
    printf("Enter number of years (t): ");
    scanf("%d", &t);
    A = p * pow(1 + r / n, n * t);
    printf("Future value of investment (A) = %.2f\n", A);
    return 0;
}

