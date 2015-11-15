#include <stdio.h>

int main(int argc, char *argv[])
{
    long number = 0;
    while (getchar() != EOF) {
        ++number;
        printf("%ld\n", number);
    }
    return 0;
}
