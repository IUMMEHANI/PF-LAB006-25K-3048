#include <stdio.h>
#include <math.h>
int main() {
    int people = 0;
    float cost_Per_Person = 250.50;
    float totalCost = 0.00;
    printf("Enter number of people in group: ");
    scanf("%d", &people);
    totalCost = people * cost_Per_Person;
    totalCost = ceil(totalCost);
    printf("Total cost:  Rs %.0f\n", totalCost);
    return 0;
}

