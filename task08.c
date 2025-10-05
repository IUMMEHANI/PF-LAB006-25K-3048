#include <stdio.h>
#include <math.h>
int main() {
    double I = 0, S = 0, M = 0;
    printf("Enter intensity of earthquake (I): ");
    scanf("%lf", &I);
    printf("Enter standard reference value (S): ");
    scanf("%lf", &S);
    if (S == 0) {
        printf("Standard value cannot be zero.\n");
        return 0;
    }
    M = log10(I / S);
    printf("Earthquake magnitude (M) = %f\n", M);
    return 0;
}

