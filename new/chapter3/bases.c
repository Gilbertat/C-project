#include <stdio.h>

/*以10进制，8进制，16进制输出100*/

void print(void);

int main(int argc, char const *argv[])
{
  print();
  return 0;
}

void print(void)
{
  int x = 100;
  printf("dec = %d; octal = %o; hex = %x\n",x,x,x);
  /*加上前缀的输出,如果要显示0和0x需要在说明符中加入#*/
  printf("dec = %d; octal = %#o; hex = %#x\n",x,x,x);
}
