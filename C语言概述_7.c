/*
许多研究表明，微笑益处多多
编写一个程序，生成一下格式的输出
Smile!Smile!Smile!
Smile!Smile!
Smile!
该程序要定义一个函数，该函数被调用一次打印一次"Smile!"
根据程序的需要使用该函数
*/
#include<stdio.h>
void Se(void);
int main(int argc,char const*argv[])
{
    Se();
    Se();
    Se();
    printf("\n");
    Se();
    Se();
    printf("\n");
    Se();
return 0;
}
void Se(void)
{
    printf("Smile!");
}
