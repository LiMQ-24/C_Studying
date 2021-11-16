/*
在美国的体积测量系统中
1品脱等于2杯
1杯等于8盎司
1盎司等于2大汤勺
1大汤勺等于3茶勺
编写一个程序
提示用户输入杯数
并以品脱 盎司 汤勺 茶勺为单位
显示等价容量
思考对于该程序，为何使用浮点数比整数类型更合适
*/
#include<stdio.h>
int main(int argc,char const*argv[])
{
    float P,B,A,T,C;
    printf("Input value:(茶勺)");
    scanf("%f",&C);
    T=3*C;
    A=2*T;
    B=8*A;
    P=2*B;
    printf("%.2f(大汤勺))\n%.2f(盎司)\n%.2f(杯)\n%.2f(品脱)\n",T,A,B,P);
return 0;
}
