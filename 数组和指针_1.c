/*
1.修改程序清单7.c的rain.c
用指针进行计算（仍然要声明并初始话数组）。
rain.c   --计算每年的总降水量、年平均降水量和5年中每月的平均降水量
#include<stdio.h>
#define MONTHS 12
#define YEARS 5
int main(void)
{
    //用2010~2014年的降水量数据初始化数组
    const float rain[YEARS][MONTHS]=
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };
    int year,month;
    float subtot,total;
    printf("YEAR     RAINNFALL (inches)\n");
    for(year=0,toatl=0;year<YEARS;year++){
        subtot+=rain[year][month];
        printf("%5d %15.1f\n",2010+year,subtot);
        total+=subtot;
    }
    printf("\nThe yearly average is %.1f inches.\n\n",total/YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct");
    printf("Nov Dec\n");
    for(month=0;mont<MONTHS;month++){
        for(year=0,subtot=0;year<YEARS;year++){
            suntot+=rain[year][month];
        }
        printf("%4.1f",subtot/YEARS);
    }
    printf("\n");
return 0;
}
*/
#include<stdio.h>
#include<time.h>
#define MONTHS 12
#define YEARS 5
void Print(float rain[][MONTHS]);
int main(int argc,char const*argv[])
{
    float rain[YEARS][MONTHS]=
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };
    clock_t start,stop;
    start=clock();
    Print(rain);
    stop=clock();
    double duration;
    duration=(double)(stop-start)/CLK_TCK;
    printf("%lf\n",duration);
return 0;
}
void Print(float rain[][MONTHS])
{
    int year;
    int month;
    float sum;
    int cnt=0;
    double total=0;
    printf("YEAR\tRAINFALL (inches)\n");
    for(year=0;year<5;year++){
        sum=0;
        float*p=(float*)rain[cnt];
        for(month=1;month<=MONTHS;month++){
            sum=sum+*(p++);
        }
        total+=sum;
        printf("%d\t%.1f\n",year+2010,sum);
        cnt++;
    }
    printf("The yearly average is %.1lf inches.\n",total/YEARS);
    printf("MONTHLY AVERSGES:\n");
    printf("Jan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\n");
    int count;
    for(count=0;count<MONTHS;count++){
        sum=0;
        for(cnt=0;cnt<YEARS;cnt++){
            sum=sum+*(rain[cnt]+count);
        }
        printf("%.1f\t",sum/5);
    }
    printf("\n");
}
