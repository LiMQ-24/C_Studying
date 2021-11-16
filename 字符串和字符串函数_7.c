/*
strncpy(s1,s2,n)函数把s2中的n个字符
拷贝至s1中，截断s2，或者有必要的话在
末尾添加空字符，如果s2的长度是n或多于
n，目标字符串不能以空字符结尾。
该函数返回s1，自己编写一个这样的函数，
名为mystrncpy（）
在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
*/
#include<stdio.h>
char* mystrncpy(char*s1,char*s2,int n);
int main(int argc,char const*argv[])
{
    char str1[20];
    char str2[40];
    int i=0;
    do{
        str2[i]=getchar();
    }while(i++<40&&str2[i-1]!=EOF);
    //char* s;
    mystrncpy(str1,str2,10);
    printf("%s",str1);
return 0;
}
char* mystrncpy(char*s1,char*s2,int n)
{
    int i=0;
    while(i<n){
        s1[i]=s2[i];
        i++;
    }
}
