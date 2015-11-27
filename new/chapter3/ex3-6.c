#include <stdio.h>

void print(void);

int main(int argc, char const *argv[])
{
  print();
  return 0;
}

void print(void)
{
  int g = 950;
  int ag = 0;
  int allg = 0;
  double wt = 3.0E-23;
  double weight = 0.0;

  printf("Enter your water weight:");
  scanf("%d",&ag);
  allg = ag * g;
  weight = allg / wt;
  printf("The water is %e\n",weight);

}
