#include <stdio.h>

void print(void);

int main(int argc, char const *argv[])
{
  print();
  return 0;
}
void print(void)
{
  int ten = 10;
  int two = 2;

  printf("Doing it right:");
  printf("%d minus %d is %d\n",ten,2,ten - two);
  printf("Doing is wrong:");
  printf("%d minus %d is %d\n",ten);

}
