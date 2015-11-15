#include <stdio.h>

int main(int argc, char *argv[])
{
    int c;

    if (c = getchar() != EOF) {
      printf("The c number is %d\n",c);
    } else {
      printf("oh no!!");
    }

    return 0;
}
