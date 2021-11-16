/*
编写一个程序把一个单词读入一个字符数组中
然后倒序打印这个单词
提示strlen（）函数可用于计算数组最后一个字符的下标
*/
#include<stdio.h>
#include<string.h>
#define size 10
int main(int argc,char const*argv[])
{
    char str[size];
    printf("Input a word:");
    scanf("%s",str);
    int i;
    int max=strlen(str);
    char str1[size];
    int max0=max;
    for(i=0;i<max0;i++){
        str1[max-1]=str[i];
        max--;
    }
    printf("%s\n",str1);
return 0;
}
