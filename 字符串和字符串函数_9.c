/*
编写一个函数，
把字符串中的内容用其反序字符串代替。
在一个完整的程序中测试该函数，
使用一个循环给函数提供输入值。
*/
#include<stdio.h>
#define size 40
char* inverse_string(char*str);
int main(int argc,char const*argv[])
{
    char s[size];
    int i=0;
    do{
        s[i]=getchar();
        i++;
    }while(i-1<size&&s[i-1]!=EOF);
    if(s[i-1]==EOF){
        while(i<size){
            s[i]='\0';
            i++;
        }
    }
    inverse_string(s);
return 0;
}

char* inverse_string(char*str)
{
    int j=size-1;
    while(j>=0){
        if(str[j]!='\n'&&str[j]!='\0'&&str[j]!=EOF){
            putchar(str[j]);
        }
        j--;
    }
}
