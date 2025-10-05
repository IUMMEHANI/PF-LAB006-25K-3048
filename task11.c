#include <stdio.h>
#include <math.h>
int main() {
    float H = 0.00;
	float theta = 0.00;
	float L = 0.00;
    printf("Enter height of building (H): ");
    scanf("%f", &H);
    printf("Enter angle of elevation in radians : ");
    scanf("%f", &theta);
    if (tan(theta) == 0) {
        printf("Measuring length is not possible as tan(theta) = 0 tends to infinity.\n");
        return 0;
    }
    L = H / tan(theta);
    if (L >= 0) {
    printf("Length of shadow (L) = %.2f units\n", L);
    }
    else {
    	printf("Enter valid values as length cannot be negative.");
	}
    return 0;
}

