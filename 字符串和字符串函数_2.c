/*
修改并编程练习1
的函数，在n个字符后停止，
或在读到第一个空白、
制表符或者换行符时停止，那个先遇到那个先停止。
不能只用scanf（）
*/
#include<stdio.h>
void read_string(char* str,int length);
int main(int argc,char const*argv[])
{
    char a[30];
    read_string(a,sizeof(a)/sizeof(a[0]));
    fputs(a,stdout);
return 0;
}
void read_string(char* str,int length)
{
    int cnt=0;
    do{
        str[cnt]=getchar();
        if(str[cnt]==' '||str[cnt]=='\n'||str[cnt]=='\t'){
            break;
        }
    }while(str[cnt]!=EOF&&++cnt<length);
}
