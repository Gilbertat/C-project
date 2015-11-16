#include <stdio.h>

#define OUT  0
#define IN   1


int main(int argc, char *argv[])
{
    int c, state;

    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                printf("\n");
                state = OUT;
            }
        } else if (state == OUT) {
            state = IN;
            putchar(c);
        } else {
            putchar(c);
        }
    }
    return 0;
}
