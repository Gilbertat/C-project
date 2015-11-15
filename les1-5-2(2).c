#include <stdio.h>

#define NONBLANK 'a'

int main(int argc, char *argv[])
{
    int c, lastc;

    lastc = NONBLANK;

    while ((c = getchar()) != EOF) {
        if (c != ' ' || lastc != ' ') {
            putchar(c);
        }
        lastc = c; //记得重置最后输入的字符以便删除多余空格

    }

    return 0;
}
