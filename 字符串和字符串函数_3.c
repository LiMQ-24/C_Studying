/*
设计并测试一个函数，
从一行输入中把一个单词读入
一个数组中，并丢弃输入行中的
其余字符，该函数应该跳过第一个
非空字符前面的所有空白。
将一个单词定义为没有空白，
制表符或换行的字符序列。
*/
#include<stdio.h>
#define size 20
void read_string(char *str,int length);
int main(int argc,char const*argv[])
{
    char a[size];
    read_string(a,size);
    //printf("%s\n",a);
    //printf("#########\n");
    int i=0;
    while(a[i]==' '||a[i]=='\t'||a[i]=='\n'){   /*行编辑原理所致   */
        i++;
    }
    while(i<size&&a[i]!=EOF){
        putchar(a[i]);
        i++;
    }
return 0;

}
void read_string(char *str,int length)
{
    int i;
    for(i=0;i<length;i++){
        str[i]=getchar();
        if(str[i]==EOF){
            break;
        }
    }
}
