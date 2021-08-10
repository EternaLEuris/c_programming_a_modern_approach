#include <stdio.h>

int main(int argc, char *argv[])
{
    
    int result, x;

    result = 0;

    printf("Enter a number:");
    scanf("%d", &x);

    result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("%d\n", result);

    return 0;
}
