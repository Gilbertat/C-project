#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

float change(int fahr);

int main(int argc, char *argv[])
{
    float fahr = LOWER;
    float celsius;

    for ( ; fahr <= UPPER; fahr += STEP) {
       celsius = change(fahr);
       printf("华氏%3.0f°   摄氏%6.1f°\n", fahr, celsius);
    }
    return 0;
}

float change(int fahr)
{
    float celsius;

    celsius = (5.0 / 9.0) * (fahr - 32.0);

    return celsius;
}

