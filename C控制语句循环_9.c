/*
编写一个程序
要求用户输入两个浮点数
并打印两数之差除以两数之积的结果
在用户输入非数字之前
程序应循环处理用户输入的每对值
使用一个函数返回计算的结果
*/
#include<stdio.h>
double Function(double*value1,double*value2);
int main(int argc,char const*argv[])
{
    double number1;
    double number2;
    double*p1=&number1;
    double*p2=&number2;
    printf("End of input: 000");
    int i;
    double ret;
    while(1){
        printf("Input two floating point number:");
        scanf("%lf %lf",p1,p2);
        if(*p1==000&&*p2==000){
            printf("END\n");
            break;
        }
        ret=Function(p1,p2);
        printf("%lf\n",ret);
    }
return 0;
}
double Function(double*value1,double*value2)
{
    double result;
    result=(*value1-*value2)/((*value1)*(*value2));
    return result;
}
