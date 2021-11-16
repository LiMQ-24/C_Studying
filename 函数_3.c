/*
两数的调和平均数这样计算：
先得到两数的倒数，然后计算两个倒数的平均值
最后取计算结果的倒数
编写一个函数，接受两个double类型的参数
返回这两个参数的调和平均数
*/
#include<stdio.h>
double Tiaohe_average(double number1,double number2);
int main(int argc,char const*argv[])
{
    double number1;
    double number2;
    scanf("%lf %lf",&number1,&number2);
    double ret;
    ret=Tiaohe_average(number1,number2);
    printf("%lf\n",ret);
return 0;
}
double Tiaohe_average(double number1,double number2)
{
    double sum=1/number1+1/number2;
    double value=sum/2;
    return 1/value;
}
