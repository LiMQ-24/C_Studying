/*
编写一个程序，生成下列输出
For he's a jolly good fellow!
For he's a jolly good fellow!
For he's a jolly good fellow!
Which nobody can deny!
除了main（）函数以外，该程序还要调用
两个自定义函数：
一个名为jolly（），用于打印前三条消息
调用一次打印一条
另一个函数名为deny（），打印最后一条消息
*/
#include<stdio.h>
void deny(void);
void jolly(void);
int main(int argc,char const*argv[])
{
    jolly();
    jolly();
    jolly();
    deny();
return 0;
}
void deny(void)
{
    printf("Which nobody can deny!\n");
}
void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}
