#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num & 1) {
        printf("This number is Odd.\n");
    }
    else {
	
        printf("This number is Even.\n");
    }
    return 0;
}

