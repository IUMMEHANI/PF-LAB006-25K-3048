#include <stdio.h>
int main () {
	int number = 0;
	int i;
	printf("Enter a number for its multiplication table: ");
	scanf("%d" , &number);
	printf("The multiplication table for provided number is:\n");
	for (i=1; i<=10; i++) {
		printf("%d " "* " "%d " "= " "%d \n" , number , i , number*i);
	}
	return 0;
}
