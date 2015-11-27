#include <stdio.h>

void print (void);

int main(int argc, char const *argv[])
{
  print();
  return 0;
}

void print(void)
{
  float too = 3.4E38;
  float toobig = too * 100.0f;
  float toosmall = too / 100.0f;

  printf("The up is %f,the down is %f\n",toobig,toosmall);
}
