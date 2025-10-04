#include <stdio.h>
int main () {
	int sum = 0;
	int value = 0;
	do {
		printf("Enter values for sum and to stop enter 0 and see calculated sum: ");
		scanf("%d" , &value);
		if (value != 0) {
			sum = value + sum;
		}
		printf("SUM = %d\n" , sum);
   	} while (value != 0);
	printf("FINAL SUM = %d\n" , sum);
	return 0;
}

