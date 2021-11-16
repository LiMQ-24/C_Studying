/*
编写一个函数接受一个字符串作为参数，
并删除字符串中的空格，
在一个程序中测试该函数，
使用循环读取输入行，直到用户输入一行空行，
该程序应该应用该函数读取每个输入的字符串，
并显示处理后的结果。
*/
#include<stdio.h>
#define size 40
char* Del_string(char*str[]);
int main(int argc,char const*argv[])
{
    char s[size][size];
    int i=0;
    char*q;
    do{
        q=fgets(s[i],size,stdin);
        i++;
        //if(fgets(s[i-1],size,stdin)==NULL){
          //  break;
        //}
    }while(i<size&&q!=NULL);
    char*p[size];
    int j=0;
    for(j=0;j<size;j++){
        p[j]=s[j];
    }
    Del_string(p);
return 0;   
}

char* Del_string(char*str[])
{
    int i=0;
    int cnt;
    int j;
    while(i<size){
        for(i=0;i<size;i++){
            for(j=0;j<size;j++){                
                if(str[i][j]==' '){
                    cnt=j;
                    while(cnt+1<size){
                    str[i][cnt]=str[i][cnt+1];
                    cnt++;
                    }
                }
            }
        }
            i++;
    }
    int n;
    for(n=0;n<size;n++){
        fputs(str[n],stdout);
    }
}
