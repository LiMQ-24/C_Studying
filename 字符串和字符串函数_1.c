/*
设计并测试一个函数，
从输入中获取n个字符，
（包括空白、制表符、换行符）
把结果存储在一个数组里面，
他的地址被传递作为一个参数。
*/
#include<stdio.h>
void read_string(char* str,int length);
int main(int argc,char const*argv[])
{
    char a[20];
    read_string(a,sizeof(a)/sizeof(a[0]));
    fputs(a,stdout);
return 0;
}
void read_string(char* str,int length)
{
    int cnt;
    do{
        str[cnt]=getchar();
    }while(str[cnt]!=EOF&&++cnt<length);
}
