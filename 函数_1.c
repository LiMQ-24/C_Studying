/*
设计一个函数min(x,y)
返回两个double类型的较小值
在一个简单的驱动程序中测试该函数
*/
#include<stdio.h>
double min(double x,double y);
int main(int argc,char const*argv[])
{
    double x,y;
    printf("Input two double number:");
    scanf("%lf %lf",&x,&y);
    double ret;
    ret=min(x,y);
    printf("%.2lf\n",ret);
return 0;
}
double min(double x,double y)
{
    double ret;
    if(x<y){
        ret=x;
    }else{
        ret=y;
    }
return ret;
}
