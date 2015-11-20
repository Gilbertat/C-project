#include <stdio.h>

#define NOBLANK 'a'

void function(void);

int main(int argc, char *argv[])
{
    function();
    return 0;
}

void function(void)
{
    int c,latest;
    latest = NOBLANK;
    while ((c = getchar()) != EOF) {
        if (c != ' ' || latest != ' ') {
            putchar(c);
        }
        latest = c;
    }
}
