#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("\t\t\t温度转换\n");

    float fahr, celsius;
    int lower = 0, upper = 300, step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f   %6.1f\n",fahr, celsius);
        fahr += step;
    }

    return 0;
}
