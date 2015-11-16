#include <stdio.h>

#define MAXLINE  1000  //允许的输入行的最大长度

int func(char line[], int maxline);
void copy(char to[], char from[]);


int main(int argc, char *argv[])
{
    int len; //当前行长度
    int max; //目前最长的行数
    char line[MAXLINE]; //当前的输入行
    char longest[MAXLINE]; //用于保存的最长行

    max = 0; //将当前最长行初始化为0

    while ((len = func(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("%s",longest);
    }

    return 0;
}

/*getline函数,将一行读入到s中并返回其长度*/
int func(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 &&(c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}

/*copy函数 将from复制到to*/
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}


