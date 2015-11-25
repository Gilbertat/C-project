#include <stdio.h>

void print(void);

int main(int argc, char const *argv[])
{
  print();
  return 0;
}
void print(void)
{
  for (int i = 0; i < 3; i++) {
    for (int j = 3; j > i; j--) {
        printf("smile!");
    }
    printf("\n");
  }
}
