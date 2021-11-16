/*
重写程序清单10.7的rain.c程序
把main（）中的主要任务都改成用函数来完成
10.7.c
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
#define MONTHS 12
#define YEARS 5
void Sum_water(float*p,float*q,int a,int b);
void Average_months(float*p,float*q,int a,int b);
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
    float sum[YEARS]={0,};
    Sum_water(rain[0],sum,YEARS,MONTHS);
    printf("YEAR\tRAINFALL (inches)\n");
    int years;
    int cnt=2010;
    float sum_years=0;
    for(years=0;years<YEARS;years++){
        printf("%d\t%.1lf\n",cnt+years,sum[years]);
        sum_years=sum_years+sum[years];
    }
    printf("\nThe yearly average is %.1lf inches.\n",sum_years/YEARS);
    float month[MONTHS]={0,};
    printf("\nJan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\n");
    Average_months(rain[0],month,YEARS,MONTHS);
    int i=0;
    while(i<MONTHS){
        printf("%.1lf\t",month[i]/5);
        i++;
    }
    printf("\nEND\n");
return 0;
}

void Sum_water(float*p,float*q,int a,int b)
{
    int i=0;
    int cnt=0;
    while(cnt<a){
        *(q+cnt)=*(q+cnt)+*(p+i);
        i++;
        if(i%(b)==0){
            cnt++;
        }
    }
}

void Average_months(float*p,float*q,int a,int b)
{
    int cnt=0;  
    int c=0;
    while(cnt<b){
        *(q+cnt)+=*(p+c);
        c=c+12;
        if(c==(5*12+cnt)){
            cnt++;
            c=cnt;
        }
    }
}
