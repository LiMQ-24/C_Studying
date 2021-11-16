/*
编写一个程序，生成一下输出：
Brazil, Russia, India, China
India, China
Brazil, Russia
除main（）以外，
该程序还要调用两个自定义函数
一个名为br（），调用一次打印一次“Brazil， Russia”
另一个名为ic（），调用一次打印一次“India， China”
其他内容在main（）函数中完成
*/
#include<stdio.h>
void br(void);
void ic(void);
int main(int argc,char const*argv[])
{
    br();
    printf(", ");
    ic();
    printf("\n");
    br();
    printf("\n");
    ic();
return 0;
}
void br(void)
{
    printf("Brazil, China");
}
void ic(void)
{
    printf("India, China");
}
