/*
编写一个函数
提示用户输入日、月和年
月份可以是月份号、月份名、或月份名缩写
然后该程序返回一年中到用户指定日子的总天数
*/
#include<stdio.h>
#define MONTH 12
typedef struct{
    int day;
    int month;
    int year;
}date;
int Calc(date*p,int m,int d,int y);
int main(int argc,char const*argv[])
{
    date today[MONTH];
    date*p=today;
    int m,d,y;
    scanf("%d %d %d",&m,&d,&y);
    int ret;
    ret=Calc(p,m,d,y);
    printf("SUM:%d\n",ret);
return 0;
}
int Calc(date*p,int m,int d,int y)
{
    int i=0;
    while(i<MONTH){
        (p+i)->month=i;
        (p+i)->day=31;
        i++;
        if(i==4||i==6||i==9||i==11){
            (p+i-1)->day=30;
        }
        if(y%4==0){
            (p+1)->day=29;
        }else{
            (p+1)->day=28;
        }
    }
    int sum=0;
    i=0;
    while(i<m-1){
        sum=sum+(p+i)->day;
        i++;
    }
    return sum+d;
}
