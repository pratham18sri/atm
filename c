#include <stdio.h>

int main() {
    float balance = 5000.0;
    int pin, choice;
    float amount;

    printf("Welcome to MyBank ATM\n");

    // PIN verification
    printf("Enter your PIN: ");
    scanf("%d", &pin);

    // Menu
    if (pin == 1171) {
        printf("PIN verification successful\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw\n");
        printf("3. Deposit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your balance: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter the amount to withdraw: $");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient funds\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal successful. Remaining balance: $%.2f\n", balance);
                }
                break;
            case 3:
                printf("Enter the amount to deposit: $");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposit successful. Current balance: $%.2f\n", balance);
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } else {
        printf("Invalid PIN. Access denied.\n");
    }

    printf("Thank you for using MyBank ATM. Goodbye!\n");

    return 0;
}
