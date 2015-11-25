#include <stdio.h>
#define AGE 23

void print(int age);

int main(int argc, char const *argv[])
{
  print(AGE);
  return 0;
}

void print(int age)
{
  int days = 0;
  days = age * 365;

  printf("I'm %d years old, Is %d days\n",AGE, days);
}
