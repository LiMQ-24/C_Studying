/*
设计并测试一个函数
搜索第一个函数形参指定的字符串
在其中查找第二个函数形参指定的字符首次出现的位置
如果成功，该函数返回指向该字符的指针，
如果在字符串中未找到指定字符，则返回空指针
（该函数的功能与strchr（）函数相同）
在一个完整的程序中测试该函数，
使用一个循环给函数提供输入值
*/
#include<stdio.h>
#include<stdlib.h>
void read_string(char*str,int max);
char* found_string(char*s,char ch,int number);
int main(int argc,char const*argv[])
{
    int size;
    printf("Input max string:");
    scanf("%d",&size);
    char *a;
    a=(char*)malloc(sizeof(char)*size);
    printf("Input your string:");
    read_string(a,size);
    char cha='f';
    char *n;
    n=found_string(a,cha,size);
    printf("main->%p\n",n);
return 0;
}
void read_string(char*str,int max)
{
    int i;
    for(i=0;i<max;i++){
        str[i]=getchar();
        if(str[i]==EOF||i>=max-1){
            break;
        }
    }
    for(i=0;i<max;i++){
        if(str[i]=='f'){
            printf("read_string->%p\n",&str[i]);
            break;
        }
    }

}
char* found_string(char*s,char ch,int number)
{
    int i;
    for(i=0;i<number;i++){
        if(s[i]==ch){
            printf("found_string->%p\n",&s[i]);
            return &s[i];
        }else if(i>=number-1){
            return NULL;
        }
    }
}
