#include <stdio.h>

int main(int argc, char *argv[])
{
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);

        if ((c = getchar()) == EOF) {
            printf("The EOF number is %d\n",c);
        } else {
            putchar(c);
        }

    }

    return 0;
}
