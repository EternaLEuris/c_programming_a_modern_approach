#include <stdio.h>

int main(int argc, char *argv[])
{
    
    int x, result;

    result = 0;

    printf("Enter a number: ");
    scanf("%d", &x);
    
    result = (3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + 7 * x - 6;

    printf("%d\n", result);

    return 0;
}
