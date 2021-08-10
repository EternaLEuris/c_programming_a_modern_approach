#include <stdio.h>

#define PI 3.1415926

int main(int argc, char *argv[])
{

    float r, v;

    r = 10.0f;
    v = 4.0f / 3.0f * PI * (r * r * r);

    printf("Sphere v is: %.2f\n", v);

    return 0;
}
