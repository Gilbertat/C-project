#include <stdio.h>

void print(void);

int main(int argc, char const *argv[])
{
  print();
  return 0;
}
void print(void)
{
  char c = 'A';
  printf("Enter a number please!\n");
  scanf("%d",&c);
  printf("Your enter a \'%c\' character\n",c);
}
