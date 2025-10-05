#include <stdio.h>

int main() {
    int a = 0  ,  b =0;
    printf("Enter two numbers:\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}

