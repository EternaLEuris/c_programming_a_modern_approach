#include <stdio.h>

int main(int argc, char *argv[])
{
    
    int country_code, region_code, telephone_number;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &country_code, &region_code, &telephone_number);

    printf("You entered %d.%d.%d\n", country_code, region_code, telephone_number);

    return 0;
}
