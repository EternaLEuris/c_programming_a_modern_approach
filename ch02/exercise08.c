#include <stdio.h>

int main(int argc, char *argv[])
{
    float loan, rate, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    float monthly_rate;

    monthly_rate = (rate / 100.0f) / 12.0f;

    float first_payment, second_payment, third_payment;

    first_payment = (loan * monthly_rate) + (loan - monthly_payment); 
    second_payment = (first_payment * monthly_rate) + (first_payment - monthly_payment);
    third_payment = (second_payment * monthly_rate) + (second_payment - monthly_payment);

    printf("Balance remaining after first payment: $%.2f\n", first_payment);
    printf("Balance remaining after second payment: $%.2f\n", second_payment);
    printf("Balance remaining after third payment: $%.2f\n", third_payment);
    
    return 0;
}
