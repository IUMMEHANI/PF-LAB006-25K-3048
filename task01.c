#include <stdio.h>
int main () {
	int sum = 0;
	int variable = 0;
	do {
		printf("Enter variables for sum and to stop enter 0 and see calculated sum: ");
		scanf("%d" , &variable);
		if (variable != 0) {
			sum = variable + sum;
		}
		printf("SUM = %d\n" , sum);
   	} while (variable != 0);
	printf("FINAL SUM = %d\n" , sum);
	return 0;
}
