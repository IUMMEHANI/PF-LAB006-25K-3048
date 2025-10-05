#include <stdio.h>
int main() {
    int Workshops = 0;
    int i, j;
    int participants = 0;
    printf("Enter number of workshops: ");
    scanf("%d", &Workshops);
    if (Workshops <= 0) {
        printf("Invalid number of workshops.\n");
        return 0;
    }
    for (i = 1; i <= Workshops; i++) { 
        printf("\nEnter number of participants for Workshop %d: ", i);
        scanf("%d", &participants);
        if (participants <= 0) {
            printf("Invalid participant count. Skipping Workshop %d.\n", i);
            continue;
        }
        int factorial = 1;
        for (j = 1; j <= participants; j++) {
            factorial = factorial * j;
        }
        printf("Total arrangements for Workshop %d: %d\n", i, factorial);
    }
    return 0;
}


