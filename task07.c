#include <stdio.h>
int main() {
    int amount;
    int coin;
    printf("Enter amount in cents: ");
    scanf("%d", &amount);
    if (amount <= 0) {
        printf("Invalid amount.\n");
        return 0;
    }
    coin = 25;
    int count25 = 0;
    while (amount >= coin) {
        amount -= coin;
        count25++;
    }
    coin = 10;
    int count10 = 0;
    while (amount >= coin) {
        amount -= coin;
        count10++;
    }
    coin = 5;
    int count5 = 0;
    while (amount >= coin) {
        amount -= coin;
        count5++;
    }
    coin = 1;
    int count1 = 0;
    while (amount >= coin) {
        amount -= coin;
        count1++;
    }
    printf("Coins needed:\n");
    printf("25 cents: %d\n", count25);
    printf("10 cents: %d\n", count10);
    printf("5 cents : %d\n", count5);
    printf("1 cent  : %d\n", count1);

    return 0;
}

