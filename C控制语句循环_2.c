/*
使用嵌套循环 ，按下面的格式打印字符串
$
$$
$$$
$$$$
$$$$$
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char c = '$';
    int i;
    int j;
    for (i = 0; i < 5; i++)
    {
        j = 0;
        while (j <= i)
        {
            printf("%c", c);
            j++;
        }
        printf("\n");
    }
    return 0;
}
