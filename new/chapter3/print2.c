#include <stdio.h>

/*无符号变量及有符号变量的打印*/

void print(void); //函数定义

int main(int argc, char const *argv[])
{
  print(); //函数调用
  return 0;
}
void print(void) //函数声明
{
  unsigned int un = 300000000;
  short end = 200;
  long big = 65537;
  long long verybig = 12345678908642;

  printf("un = %u and not %d\n",un,un);
  printf("end = %hd and %d\n",end,end);
  printf("big = %ld not %hd\n",big,big);
  printf("verybig = %lld and not %ld\n",verybig,verybig);
}
