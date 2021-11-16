/*
编写一个程序
先提示用户输入名，然后提示用户输入姓
在一行打印用户输入的名和姓
下一行分别打印名和姓的字母数
字母数要与相应名和姓的开头对齐，
如下所示：
Melissa Honeybee
      7        8
*/
#include<stdio.h>
#include<string.h>
int main(int argc,char const*argv[])
{
    char firstname[10];
    char lastname[10];
    printf("Please input your firstname:");
    scanf("%s",&firstname);
    printf("Please input your lastname:");
    scanf("%s",&lastname);
    int width1=strlen(firstname);
    int width2=strlen(lastname);
    printf("%-*s",width1+1,firstname);
    printf("%s\n",lastname);
    printf("%*d",width1,width1);
    printf("%*d\n",width2+1,width2);
return 0;
}
