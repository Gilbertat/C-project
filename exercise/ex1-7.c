#include <stdio.h>

void test(void);

int main(int argc, char *argv[])
{
    test();

    return 0;
}
void test(void)
{
    printf("The Eof is %d\n",EOF);
}
