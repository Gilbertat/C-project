#include <stdio.h>

void one_three(void);
void two(void);


int main(int argc, char const *argv[])
{
  printf("starting now\n");
  one_three();
  two();
  printf("done!\n");

  return 0;
}
void one_three(void)
{
  printf("one\n");
}
void two(void)
{
  printf("two\nthree\n");
}
