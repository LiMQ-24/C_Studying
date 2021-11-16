/*
编写一个函数
接受3个参数
一个字符和两个整数
字符参数是待打印的字符，第1个整数指定一行中打印字符的次数
第2个整数指定打印指定字符的行数
编写一个调用该函数的程序
*/
#include<stdio.h>
void Print(char str,int i,int j);
int main(int argc,char const*argv[])
{
    char character;
    scanf("%c",&character);
    int i=3;
    int j=3;
    Print(character,i,j);
return 0;
}
void Print(char str,int i,int j)
{
    int m,n;
    for(m=0;m<i;m++){
        for(n=0;n<j;n++){
            printf("%c",str);
        }
        printf("\n");
    }
}
