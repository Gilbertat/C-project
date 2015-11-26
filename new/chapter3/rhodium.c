#include <stdio.h>

void print(void);

int main(int argc, char const *argv[])
{
  print();
  return 0;
}

void print(void)
{
  float weight = 0.0;
  float value = 0.0;

  printf("Are you worth your weight in rhodium?\n");
  printf("Let's check it out.\n");
  printf("Please enter your weight in pounds:");

  scanf("%f",&weight);
  value = 770.0 * weight * 14.5833;

  printf("Your weight is rhodium is worth $%.2f.\n",value);
  printf("You are easily worth that! if rhodium prices drop.\n");
  printf("Eat more to maintain your value.\n");

}
