#include <stdio.h>

int main(int argc, char *argv[])
{
    int n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12,
        first_sum, second_sum, total;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
            &n0, &n1, &n2, &n3, &n4,
            &n5, &n6, &n7, &n8, &n9,
            &n10, &n11);

    first_sum = n1 + n3 + n5 + n7 + n9 + n11;
    second_sum = n0 + n2 + n4 + n6 + n8 + n10;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}
