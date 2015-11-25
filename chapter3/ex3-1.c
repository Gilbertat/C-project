#include <stdio.h>
#define NUM 10

int binsearch(int x, const int *v, int n);

int main(int argc, char const *argv[])
{
  int proprety = 0;
  int v[NUM] = {1,2,3,4,5,6,7,8,9};
  proprety = binsearch(5,v,9);
  if (proprety == -1) {
    printf("數組v中不包含x\n");
  } else {
    printf("%d\n",proprety);
  }
  return 0;
}
int binsearch(int x, const int *v,int n)
{
    int low, high, mid = 0;

    low = 0;
    high = n - 1;
    while(low <= high && x != v[mid]) {
      if (x < v[mid]) {
          high = mid - 1;
      } else {
        low = mid + 1;
      }
      mid = (low + high) / 2;
    }
    if (x == v[mid]) {
      return mid;
    } else {
      return -1;
    }
}
