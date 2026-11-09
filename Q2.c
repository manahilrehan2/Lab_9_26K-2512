
#include <stdio.h>

void withdraw(float *balance, float amount){
    if (amount <= *balance)
    {
        *balance = *balance - amount;
        printf("Withdrawal Successful!\n");
        printf("Updated Balance: PKR %.2f\n", *balance);
    }
    else
    {
        printf("Transaction Declined: Insufficient Balance\n");
    }
}

void deposit(float *balance, float amount){
    *balance = *balance + amount;

    printf("Deposit Successful!\n");
    printf("Updated Balance: PKR %.2f\n", *balance);
}

int main(){
    float balance = 50000;
    float amount;
    int choice;

    printf("Account Balance: PKR %.2f\n", balance);

    printf("\nSelect Transaction Type:\n");
    printf("1. Debit (Withdraw)\n");
    printf("2. Credit (Deposit)\n");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter amount: ");
    scanf("%f", &amount);

    if (choice == 1)
    {
        withdraw(&balance, amount);
    }
    else if (choice == 2)
    {
        deposit(&balance, amount);
    }
    else
    {
        printf("Invalid Transaction Type\n");
    }

    printf("\nFinal Account Balance: PKR %.2f\n", balance);

    return 0;
}

