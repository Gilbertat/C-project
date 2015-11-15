#include <stdio.h>

#define NONBACK 'a'
int main(int argc, char *argv[])
{
    int c, lastc;

    lastc = NONBACK;

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
        } else if (lastc != ' ') {
            putchar(c);
        }
            lastc = c;
    }
    return 0;
}
