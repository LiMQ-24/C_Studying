/*
编写一个程序读取一行输入
然后把输入的内容倒序打印出来，可以把输入存储在
char类型的数组中，假设每行字符不超过255.
回忆一下，根据%c转换说明，scanf（）函数一次只能从
输入中读取一个字符，而且在用户按下Enter键时是scanf（）
函数会生成一个换行字符（\n）,
*/
#include<stdio.h>
#define size 20
int main(int argc,char const*argv[])
{
    char str[size];
    printf("Input number:\n");
    int i;
    for(i=0;i<size;i++){
        scanf("%c",&str[i]);
        if(str[i]=='\n'){
            printf("INTERRUPT\n");
            break;
        }
    }
    int j=i-1;
    for(i=j;i>=0;i--){
        printf("%c\n",str[i]);
    }
return 0;
}
