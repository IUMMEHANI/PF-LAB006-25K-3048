#include <stdio.h>
int main() {
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Multiplied by 2: %d\n", num << 1);  
    printf("Multiplied by 4: %d\n", num << 2);
    printf("Multiplied by 8: %d\n", num << 3);  
    return 0;
}

