#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("\t\t\t摄氏温度转华氏温度\n");
    float fahr, celsius;
    int lower = 0, upper = 300, step = 20;

    celsius = lower;

    while (celsius <= upper) {
        fahr = (5.0 / 9.0) * (celsius + 32.0);
        printf("摄氏温度:%3.1f°\t   华氏温度:%6.1f°\n",fahr, celsius);
        celsius += step;
    }
    return 0;
}
