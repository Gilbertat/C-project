#include <stdio.h>

#define MAXLINE  1000

int max; //允许输入的最大行数
char line[MAXLINE]; //当前输入行
char longest[MAXLINE]; //用于保存最长的行

int func(void);
void copy(void);


int main(int argc, char *argv[])
{
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while ((len = func()) > 0) {
        if (len > max) {
            max = len;
            copy();
        }
    }
    if (max > 0) {
        printf("%s",longest);
    }
    return 0;
}

int func(void)
{
    int c, i;
    extern char line[];

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}

void copy(void)
{
    int i = 0;;
    extern char line[], longest[];

    while ((line[i] = longest[i]) != '\0') {
        ++i;
    }
}
