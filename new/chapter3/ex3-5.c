#include <stdio.h>

void print(void);

int main(int argc, char const *argv[])
{
  print();
  return 0;
}

void print(void)
{
  double seconds = 3.156E7;
  int years = 0;
  printf("Enter your old please:");
  scanf("%d",&years);
  printf("Your old = %e seconds\n",seconds * years);
}
