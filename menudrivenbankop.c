#include <stdio.h>

int main() {
    float balance = 0, amount;
    int choice = 0;

    while(choice != 4) {

        printf("\n1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter amount: ");
                scanf("%f", &amount);

                if(amount > 0) {
                    balance = balance + amount;
                    printf("Deposit successful\n");
                } else {
                    printf("Invalid amount\n");
                }
                break;

            case 2:
                printf("Enter amount: ");
                scanf("%f", &amount);

                if(amount > 0 && amount <= balance) {
                    balance = balance - amount;
                    printf("Withdrawal successful\n");
                } else if(amount > balance) {
                    printf("Insufficient balance\n");
                } else {
                    printf("Invalid amount\n");
                }
                break;

            case 3:
                printf("Current Balance = %.2f\n", balance);
                break;

            case 4:
                printf("Exiting program\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}