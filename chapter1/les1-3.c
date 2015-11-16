#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("\t\t\t温度转换表\n");

    float fahr, celsius;

    int lower = 0, upper = 300;

    fahr = upper;

    for ( ; fahr >= lower; fahr -= 20){
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f   %6.1f\n",fahr,celsius);
    }

    return 0;
}
