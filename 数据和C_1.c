/*
编写一个程序
要求提示输入一个ASCII码值
然后打印输入的字符
*/
#include<stdio.h>
int main(int argc,char const*argv[])
{
    int i;
    printf("Input ASCII:");
    scanf("%d",&i);
    printf("Output:     %c\n",i);
return 0;
}
