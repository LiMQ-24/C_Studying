/*
编写一个名为is_within()的函数，
接受一个字符和一个指向字符串的指针
作为两个形参。
如果指定字符在字符串中，该函数返回一个非零值（即为真）
否则，返回0（即位假）
在一个完整的程序中测试该函数，
使用一个循环给函数提供输入值。
*/
#include<stdio.h>
#define size 20
int is_within(char a,char *str,int number);
int main(int argc,char const*argv[])
{
    char s[size];
    char s1='f';
    int i=0;
    do{
        s[i]=getchar();
        i++;
    }while(i-1<size&&s[i]!=EOF);
    int ret;
    ret=is_within(s1,s,i-1);
    printf("%d\n",ret);
return 0;
}
int is_within(char a,char*str,int number)
{
    int i;
    int result;
    for(i=0;i<number;i++){
        if(str[i]==a){
            result=1;
        }
    }
    if(result==1){
        return result;
    }else{
        return 0;
    }
}
