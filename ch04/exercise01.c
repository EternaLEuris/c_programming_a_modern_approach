#include <stdio.h>

int main(int argc, char *argv[])
{
    int two_digit;

    printf("Enter a two-digit number: ");
    scanf("%d", &two_digit);

    int first_digit, second_digit;

    first_digit = two_digit % 10;
    second_digit = two_digit / 10;

    printf("The reversal is: %d%d\n", first_digit, second_digit);

    return 0;
}
