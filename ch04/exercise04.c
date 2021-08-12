#include <stdio.h>

int my_pow(int x, int y);

int main(int argc, char *argv[])
{
    int number;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    int octal_number, i;

    i = 0;
    octal_number = 0;

    while (number)
    {
        octal_number = octal_number + (number % 8) * my_pow(10, i);
        number /= 8;
        i++;
    }

    printf("In octal, your number is: %.5d\n", octal_number);

    return 0;
}

int my_pow(int x, int y)
{
    int result;
    result = 1;

    int i;

    for (i = 0; i < y; i++)
        result *= x;

    return result;
}
