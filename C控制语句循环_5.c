/*
编写一个程序
提示用户输入大写字母
使用嵌套循环以下面金字塔型的格式打印字母：
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
打印这样的图形，要根据用户输入的字母来决定
例如上面的图形是在用户输入E后的打印结果
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    system("pause");
    char c;
    printf("Input a value:");
    scanf("%c", &c);
    int value = (int)c;
    int row = value - 64;
    int i;
    int start;
    int n = row;
    int m;
    printf("\n");
    printf("\n");
    for (i = 1; i < row + 1; i++)
    {
        start = 65;
        m = n;
        while (start <= 65 + (i - 1))
        {
            printf("%*c", m, start);
            m = 1;
            start++;
        }
        start = start - 2;
        while (start >= 65)
        {
            printf("%c", start);
            start--;
        };
        printf("\n");
        n--;
    }
    system("pause");
    return 0;
}
