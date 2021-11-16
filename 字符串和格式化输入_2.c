/*
编写一个程序
将一个double类型大的变量设置为1.0/3.0
一个float类型的变量设置为1.0/3.0
分别显示两次计算的结果各3次
一次显示小数点后面6位数字
一次显示小数点后面12位数字
一次显示小数点后面16位数字
程序中要包含float.h头文件，并显示FLT_DIG
DBL_DIG的值，1.0/3.0的值与这些值一致吗？
*/
#include<stdio.h>
#include<float.h>
int main(int argc,char const*argv[])
{
    float f=1.0/3.0;
    double d=1.0/3.0;
    printf("%.6f\n",f);
    printf("%.12f\n",f);
    printf("%.16f\n",f);
    printf("--------\n");
    printf("%.6f\n",d);
    printf("%.12f\n",d);
    printf("%.16f\n",d);
return 0;
}
