#include <stdio.h>


void echo(void);

int main(int argc, char *argv[])
{
    echo();
    return 0;
}

void echo(void)
{
    int c;
    int NT = 0, NL = 0, NN = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            ++NT;
        } else if (c == ' ') {
            ++NL;
        } else if (c == '\n') {
            ++NN;
        }
    }
    printf("空格共%d个,换行共%d个,制表符共%d个\n",NL,NN,NT);
}
