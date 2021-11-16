/*
编写一个程序
要求用户输入两个浮点数，
并打印两数之差除以两数乘积的结果
在用户输入非数字之前，
程序应循环处理用户输入的每对值
*/
#include<stdio.h>
int main(int argc,char const*argv[])
{
    printf("End of input: 000\n");
    double value1;
    double value2;
    int i;
    printf("Input two floating point number:");
    scanf("%lf %lf",&value1,&value2);
    while(value1!=000&&value2!=000){
        double ret=(value1-value2)/(value1*value2);
        printf("Ouput result:");
        printf("%lf\n",ret);
        printf("Input two floating point number:");
        scanf("%lf %lf",&value1,&value2);
    }
return 0;
}
