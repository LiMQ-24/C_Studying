/*
编写并测试一个函数larger_of（）
该函数把两个double类型变量的值替换为较大的值
例如
larger_of(x,y)会把x和y中较大的之重新赋给两个变量
*/
#include<stdio.h>
void larger_of(double*x,double*y);
int main(int argc,char const*argv[])
{
    double number1;
    double number2;
    scanf("%lf %lf",&number1,&number2);
    larger_of(&number1,&number2);
    printf("%.2lf %.2lf\n",number1,number2);
return 0;
}
void larger_of(double*x,double*y)
{
    if(*x>*y){
        *y=*x;
    }else{
        *x=*y;
    }
}
