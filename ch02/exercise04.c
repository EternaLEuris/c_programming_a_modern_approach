#include <stdio.h>

#define RATE 0.05

int main(int argc, char *argv[])
{
    float amount, tax, total_amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    total_amount = amount + (amount * RATE);

    printf("With tax added: $%.2f\n", total_amount);

    return 0;
}
