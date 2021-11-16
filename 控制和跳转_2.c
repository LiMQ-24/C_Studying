/*
编写一个程序读取输入，读到#字符停止
程序要打印每个输入的字符以及对应的ASCII码（十进制）
每行打印８个“字符－ASCII码”组合
建议：使用字符计数和求模运算符（％）在每８个
循环周期时打印一个换行符
*/
#include<stdio.h>
#define size 30
int main(int argc,char const*argv[])
{
    char str[size];
    int i;
    for(i=0;i<size;i++){
        scanf("%c",&str[i]);
        if(str[i]=='#'){
            printf("Interrupt\n");
            break;
        }
    }
    int j=i;
    for(i=0;i<j;i++){
        printf("%c-%d\t",str[i],str[i]);
        if((i+1)%8==0)
        {
            printf("\n");
        }
    }
return 0;
}
