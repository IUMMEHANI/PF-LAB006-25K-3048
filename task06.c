#include <stdio.h>
int main() {
    int num, reverse = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 0;
    }
    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    printf("Reverse number: %d\n", reverse);
    return 0;
}

