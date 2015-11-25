#include <stdio.h>

void butler(void);

int main(int argc, char const *argv[])
{
  butler();
  return 0;
}

void butler(void)
{
  printf("I will summon the butler function\n");
  printf("You rang, sir?\n");
  printf("Yes. Bring me some tea and writeable CD-ROMS.\n");
}
