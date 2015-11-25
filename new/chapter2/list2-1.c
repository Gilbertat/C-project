#include <stdio.h>

void print(void);

int main(int argc, char const *argv[])
{
  print();

  return 0;
}
void print(void)
{
    int num = 1;

    printf("I am a simple computer\n");
    printf("My favorite number is %d because it is first.\n",num);
}
