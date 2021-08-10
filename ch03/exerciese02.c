#include <stdio.h>

int main(int argc, char *argv[])
{
    
    int month, day, year;
    float item_number, unit_price;

    printf("Enter item number: ");
    scanf("%f", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item    Unit        Puchase\n");
    printf("        Price       Date\n");
    printf("%.0f     $%6.2f     %d/%d/%d\n", item_number, unit_price, month, day, year);

    return 0;
}
