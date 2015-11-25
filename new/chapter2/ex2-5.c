#include <stdio.h>
#include <math.h>

#define TOES 10

void print(void);

int main(int argc, char const *argv[])
{
  print();
  return 0;
}

void print(void)
{
  int toes = TOES;
  int toes2 = pow(toes,2);
  int toes3 = pow(toes,3);
  printf("toes = %d,toes squares = %d, toes cubed = %d\n",toes,toes2,toes3);
}
