/*
编写一个程序，
读入10个字符串或者读到EOF时停止，
该程序为用户提供一个有5个选项的菜单，
打印源字符串列表
以ASCII中的顺序打印字符串
按长度递增顺序打印字符串
按字符串中第1个单词的长度打印字符串，退出
菜单可以循环显示，
除非用户选择退出选项
当然，该程序要真正完成菜单中个选项的功能。
*/
#include<stdio.h>
#define size 10
char* Print(char*str);
char* AS(char*str1);
int main(int argc,char const*argv[])
{
    char a[size];
    int i=0;
    do{
        a[i]=getchar();
        i++;
    }while(i-1<size-1&&a[i-1]!=EOF);
    
    //Print(a);
    AS(a);
return 0;
}

char* Print(char*str)
{
    int i=0;
    fputs(str,stdout);
}

char* AS(char*str1)
{
    int i=0;
    int j;
    char middle;
    while(str1[i]!='\n'&&i<size&&str1[i]!='\0'){

        j=0;
        while(j<size-1&&str1[j]!='\n'){
            if((int)str1[j]>(int)str1[j+1]){
                middle=str1[j];
                str1[j]=str1[j+1];
                str1[j+1]=middle;
            }
            j++;
        }

        i++;
    }
    int m;
    for(m=0;m<10;m++){
        putchar(str1[m]);
    }
}
