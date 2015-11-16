#include <stdio.h>

#define OUT  0  //在单词外
#define IN   1  //在单词内

int main(int argc, char *argv[])
{
    int c, state;
    int n1 = 0, nw = 0, nc = 0;

    state = OUT;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            ++n1;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("共%d行,共%d个单词,共%d个字符\n",n1,nw,nc);

    return 0;
}
