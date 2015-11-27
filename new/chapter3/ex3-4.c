#include <stdio.h>

void print(void);

int main(int argc, char const *argv[])
{
  print();
  return 0;
}

void print(void)
{
  float c = 0.0;
  printf("Enter a float value please!:");
  scanf("%f",&c);
  printf("The input is %f or %e\n",c);

}
