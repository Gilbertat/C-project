#include <stdio.h>

void print(void);

int main(int argc, char const *argv[])
{
  print();
  return 0;
}

void print(void)
{
  float y = 2.54;
  int x = 0;
  printf("please enter your hight:");
  scanf("%d",&x);
  printf("Your height is %f cm\n",x * y);
}
