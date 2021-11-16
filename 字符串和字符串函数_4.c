/*
设计并测试一个函数，
他类似编程练习3的描述，
只不过他接受第二个参数
指明可读取的最大字符数
*/
#include<stdio.h>
#include<stdlib.h>
void read_string(char *str,int max);
int main(int argc,char const*argv[])
{
    int size;
    printf("Enter max character:");
    scanf("%d",&size);
    char *p;
    p=(char*)malloc(sizeof(char)*size);  /*C99以前*/
    //char p[size];                      /*C99以后*/
    printf("Input:");
    read_string(p,size);
    printf("Output:");
    int i=0;
    while(p[i]=='\n'||p[i]=='\t'||p[i]==' '){
        i++;
    }
    while(i<size&&p[i]!=EOF){
        putchar(p[i]);
        i++;
    }
    free(p);  /*必须释放*/
return 0;
}
void read_string(char *str,int max)
{
    int i;
    for(i=0;i<max;i++){
        str[i]=getchar();
        if(str[i]==EOF||i>=max){
            break;
        }
    }
}
