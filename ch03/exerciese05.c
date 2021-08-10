#include <stdio.h>

int main(int argc, char *argv[])
{

    int x11, x12, x13, x14;
    int x21, x22, x23, x24;
    int x31, x32, x33, x34;
    int x41, x42, x43, x44;

    int row_sums_1, row_sums_2, row_sums_3, row_sums_4;
    int column_sums_1, column_sums_2, column_sums_3, column_sums_4;
    int diagonal_sums_1, diagonal_sums_2;

    printf("Enter the numbners from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
            &x11, &x12, &x13, &x14,
            &x21, &x22, &x23, &x24,
            &x31, &x32, &x33, &x34,
            &x41, &x42, &x43, &x44);


    row_sums_1 = x11 + x12 + x13 + x14;
    row_sums_2 = x21 + x22 + x23 + x24;
    row_sums_3 = x31 + x32 + x33 + x34;
    row_sums_4 = x41 + x42 + x43 + x44;

    column_sums_1 = x11 + x21 + x31 + x41;
    column_sums_2 = x12 + x22 + x32 + x42;
    column_sums_3 = x13 + x23 + x33 + x43;
    column_sums_4 = x14 + x24 + x34 + x44;

    diagonal_sums_1 = x11 + x22 + x33 + x44;
    diagonal_sums_2 = x41 + x32 + x23 + x14;

    printf("Row sums: %d %d %d %d\n", row_sums_1, row_sums_2, row_sums_3, row_sums_4);
    printf("Column sums: %d %d %d %d\n",  column_sums_1, column_sums_2, column_sums_3, column_sums_4);
    printf("Diagonal sums: %d %d\n", diagonal_sums_1, diagonal_sums_2);

    return 0;
}
