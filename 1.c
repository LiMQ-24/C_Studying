/*
你刚被MacroMuscle有限公司聘用
该公司准备进入欧洲市场
需要一个把英寸单位转换为厘米单位（1英寸 =2.54 厘米）
的程序。该程序主要提示用户输入英寸值
你的任务是定义程序目标和设计程序
*/
#include<stdio.h>
int main(int argc,char const*argv[])
{
    float swap;
    printf("Input Inches:");
    scanf("%f",&swap);
    printf("   Output cm:");
    printf("%.2f\n",swap*2.54);
return 0;
}
