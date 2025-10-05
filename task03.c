#include <stdio.h>
int main () {
	int available_balance = 50000;
	int withdrawal_amount = 0;
	printf("Current Balance = 50000\n");
	while (available_balance > 0) {
	printf("How much amount would you like to withdraw: ");
	scanf("%d" , &withdrawal_amount);
	if (withdrawal_amount<=available_balance) {
		if (withdrawal_amount > 0) {
	        available_balance = available_balance - withdrawal_amount;
	        printf("Current Balance = %d \n" , available_balance);
        }
        else {
        	printf("Please Enter a positive amount!\n");
		}
	  }
	else {
		printf("Please Enter a Valid Amount.\n");
	  }
    }
    printf("You have no amount left to withdraw.");
    return 0;
}
