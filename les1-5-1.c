#include <stdio.h>

int main(int argc, char *argv[])
{
    int nt = 0, nl = 0, n = 0, c;

    while ((c = getchar()) != EOF ) {
        if (c == ' ') {
            ++nl;
        }
        if (c == '\t') {
            ++nt;
        }
        if (c == '\n') {
            ++n;
        }
    printf("空格%d个\t制表符%d个\t换行符%d个\n",nl,nt,n);
    }

    return 0;
}
