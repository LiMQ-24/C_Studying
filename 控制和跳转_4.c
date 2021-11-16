/*
使用if else语句编写一个程序读取输入
直到#停止，用感叹号替换句号，用两个
感叹号替换原来的感叹号，最后报告进行了多少次替换
*/
#include<stdio.h>
int main(int argc,char const*argv[])
{
    char ch;
    int cnt;
    while((ch=getchar())!='#'){
        if(ch=='.'){
            printf("!");
            cnt++;
        }else if(ch=='!'){
            printf("!!");
            cnt++;
        }else{
            putchar(ch);
        }
    }
    printf("\n");
    printf("counter=%d\n",cnt);    
return 0;
}
