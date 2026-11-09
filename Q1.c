
#include <stdio.h>

float calculateDiscount(char membership, float amount){
    float rate;

    if (membership == 'P')
    {
        rate = 20;
    }
    else if (membership == 'G')
    {
        rate = 10;
    }
    else
    {
        rate = 5;
    }

    if (amount > 10000)
    {
        rate = rate + 2;
    }

    return amount * rate / 100;
}

float calculateFinalBill(float discountedAmount){
    float tax, shipping, finalBill;

    tax = discountedAmount * 15 / 100;

    if (discountedAmount <= 5000)
    {
        shipping = 300;
    }
    else
    {
        shipping = 0;
    }

    finalBill = discountedAmount + tax + shipping;

    return finalBill;
}

int main(){
    char membership;
    float amount, discount, discountedAmount, finalBill;

    printf("Enter membership type (P/G/S): ");
    scanf(" %c", &membership);

    printf("Enter shopping amount: ");
    scanf("%f", &amount);

    discount = calculateDiscount(membership, amount);

    discountedAmount = amount - discount;

    finalBill = calculateFinalBill(discountedAmount);

    printf("\nDiscount amount: PKR %.2f", discount);
    printf("\nDiscounted amount: PKR %.2f", discountedAmount);
    printf("\nFinal payable bill: PKR %.2f", finalBill);

    return 0;
}
