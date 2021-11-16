/*
编写一个程序
提示用户输入旅行的里程和消耗的汽油量
然后计算并显示每加仑汽油行驶的英里数
显示小数点后面一位数字
接下来，使用1加仑大约3.785升，1英里大约为1.609千米
把单位是英里/加仑的值转换为升/100公里（欧洲通用的燃料小号表示法）
并显示结果，显示小数点后面1位数字，注意，美国采用的方案测量消耗单位燃料的形成
（值越大越好），而欧洲则采用单位距离消耗的燃料测量方案（值越小越好）
使用#define创建符号常量或者使用const限定符创建变量来表示两个转换系数
*/
#include<stdio.h>
#define Oil 3.785
#define distance 1.609
int main(int argc,char const*argv[])
{
    float Di;
    float Oi;
    printf("Please input your consume of Oil     :");
    scanf("%f",&Oi);
    printf("Please input your consume of distance:");
    scanf("%f",&Di);
    printf("American:%.1f(L/100 Kilomieter)\n",(Oi/Oil)/((Di/distance)/100));
return 0;
}
