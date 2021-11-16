/*
编写一个程序
提示用户输入一个double类型的数
并打印该数的立方值
自己设计一个函数计算并打印立方值
main（）函数要把用户输入的值传递
给该函数
*/
#include<stdio.h>
#include<math.h>
void cube(float*number);
void cube1(float*number1);
int main(int argc,char const*argv[])
{
    float i;
    float*p=&i;
    printf("Input a value:");
    scanf("%f",p);
    cube1(p);
    printf("The cube is %.2f\n",*p);
return 0;
}

void cube(float*number)
{
    *number=pow(*number,3);
}

void cube1(float*number1)
{
    *number1=(*number1)*(*number1)*(*number1);
}

