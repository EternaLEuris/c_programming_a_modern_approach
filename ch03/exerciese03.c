#include <stdio.h>

int main(int argc, char *argv[])
{

    int prefix, group, publisher, product, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group, &publisher, &product, &check);

    printf("GS1 prefix: %d\n", prefix);
    printf("Group identifier: %d\n", group);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", product);
    printf("Check digit: %d\n", check);

    return 0;
}
