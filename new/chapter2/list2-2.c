#include <stdio.h>

void print(void);

int main(int argc, char const *argv[])
{
  print();
  return 0;
}

void print(void)
{
  int feet = 0, fathoms = 2;

  feet = 6 * fathoms;
  printf("There are %d feet is %d fathoms!\n",feet, fathoms);
  printf("Yes,I said %d feet!\n",feet);
}
