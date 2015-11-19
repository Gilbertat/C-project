#include <stdio.h>

#define LOWER  0
#define UPPER  300
#define STEP   20

float unitcelsius(int fahr);/*函数声明*/
int main(int argc, char *argv[])
{
    int fahr = LOWER;
    float celsius = 0.0;

    for ( ; fahr <= UPPER; fahr += STEP) {
        celsius = unitcelsius(fahr);

        printf("华氏%3d°  摄氏%3.1f°\n",fahr,celsius);
    }

    return 0;
}

float unitcelsius(int fahr) /*转换函数*/
{
    float celsius = 0;

    celsius = (5.0 / 9.0) * (fahr - 32.0);

    return celsius;
}
