/*
一年大概有3.156X10^7秒
编写一个程序，然后显示该年龄对应的秒数
*/
#include<stdio.h>
int main(int argc,char const*argv[])
{
    int age;
    printf("Input your age:");
    scanf("%d",&age);
    double i=3.156e7;
    printf("conversion:%.4e\n",age*i);
return 0;
}
