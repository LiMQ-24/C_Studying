/*
编写一个程序
创建一个含26个元素的数组
并在其中存储26个小写字母
然后打印数组的所有内容
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[26];
    int i;
    int j = 97;
    for (i = 0; i < 26; i++)
    {
        a[i] = j;
        j++;
    }
    for (i = 0; i < 26; i++)
    {
        printf("%c\n", a[i]);
    }
    return 0;
}
