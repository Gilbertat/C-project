#include <stdio.h>
/*整型变量c记录当前输入的值,lastc记录上一次输入的值,NONBLANK初始为
 任意非空格字符,第一个if输出非空字符,第二个if处理连续输入的空格
 当上一行字符不是连续空格时,输出,最后刷新lastc*/
#define NONBLANK 'a'
int main(int argc, char *argv[])
{
    int c, lastc;

    lastc = NONBLANK;

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
        }
        if (c == ' ') {
            if (lastc != ' ') {
                putchar(c);
            }
        }
        lastc = c;
    }

    return 0;
}
