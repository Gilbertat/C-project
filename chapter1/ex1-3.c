#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

int main(int argc, char *argv[])
{
    float fahr, celsius;

    fahr = LOWER;

    for ( ;fahr <= UPPER; fahr += 20) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f  %6.1f\n",fahr, celsius);
    }
    return 0;
}
