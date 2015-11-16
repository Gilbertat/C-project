#include <stdio.h>

int main(int argc, char *argv[])
{
    int c, n1;
    n1 = 0;

    while ((c = getchar()) != EOF) {
      if (c == '\n') {
        ++n1;
      }
    printf("共%d行\n",n1);
    }
    return 0;
}
