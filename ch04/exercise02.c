#include <stdio.h>

int main(int argc, char *argv[])
{
    int three_digit;

    printf("Enter a three-digit number: ");
    scanf("%d", &three_digit);

    int first_digit, second_digit, third_digit;

    first_digit = three_digit % 10;
    second_digit = (three_digit / 10) % 10;
    third_digit = three_digit / 100;

    printf("The reversal is: %d%d%d\n", first_digit, second_digit, third_digit);

    return 0;
}
