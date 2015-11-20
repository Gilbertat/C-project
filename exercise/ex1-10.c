#include <stdio.h>

void count(void);

int main(int argc, char *argv[])
{
    count();
    return 0;
}
void count(void)
{
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
        } else if (c == '\b') {
            printf("\\b");
        } else if (c == '\\') {
            printf("\\\\");
        }
        putchar(c);
    }
}
