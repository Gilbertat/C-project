#include <stdio.h>

int main(int argc, char *argv[])
{

    int fahr, celsius; //声明 两个int变量
    int lower = 0, upper = 300, step = 20;//定义温度下限,上限,步频

    fahr = lower; //将温度下限值赋值给fahr
    while(fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n",fahr,celsius);
        fahr += step;
    }

    return 0;
}
