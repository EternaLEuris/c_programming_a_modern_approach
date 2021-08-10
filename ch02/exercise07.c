#include <stdio.h>

#define DOLLAR_1 1
#define DOLLAR_5 5
#define DOLLAR_10 10
#define DOLLAR_20 20

int main(int argc, char *argv[])
{
    
    int amount;

    printf("Enter a dollar amount:");
    scanf("%d", &amount);

    printf("$%d bills: %d\n", DOLLAR_20, amount / DOLLAR_20);
    printf("$%d bills: %d\n", DOLLAR_10, amount % DOLLAR_20 / DOLLAR_10);
    printf("$%d bills: %d\n", DOLLAR_5, amount % DOLLAR_20 % DOLLAR_10 / DOLLAR_5);
    printf("$%d bills: %d\n", DOLLAR_1, amount % DOLLAR_20 % DOLLAR_10 % DOLLAR_5 / DOLLAR_1);
    

    return 0;
}
