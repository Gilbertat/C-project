#include <stdio.h>
#include <inttypes.h>

void print(void);

int main(int argc, char const *argv[])
{
  print();
  return 0;
}

void print(void)
{
  int16_t me16;

  me16 = 4593;
  printf("First, assume int16_t is short:");
  printf("me16 = %hd\n", me16);
  printf("Next,let's not make any assumptions.\n");
  printf("Instead,use a \"macro\"from inttypes.h:");
  printf("me16 = %" PRId16 "\n",me16);
}
