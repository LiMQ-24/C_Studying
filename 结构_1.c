/*
重新编写复习题5
用月份名的拼写代替月份号
别忘了使用strcmp（）
在一个简单的程序中测试该函数
复习题5：
编写一个函数，用户提供月份号
该函数就返回一年中到该月为止（包括该月）的总天数
假设所有函数的外部声明了第3题的结构模板和一个该类型结构的数组
复习题3：
设计一个结构模板存储一个月份名，该月份名的3个字母缩写
该月的天数及月份号
*/
#include<stdio.h>
#define size 5
#define ALL_month 12
typedef struct calc{
    int month;
    char name[ALL_month];
    int days;
}date;
int Print(date total[ALL_month],int m);
int main(int argc,char const*argv[])
{
    date total[ALL_month];
    int i=0;
    printf("Input months:\n");
    int m=0;
    int ret=0;
    scanf("%d",&m);
    ret=Print(total,m);
    printf("SUM:%d\n",ret);
return 0;
}
int Print(date total[ALL_month],int m)
{
    char name_def[ALL_month][size]={
        "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec",
    };
    int i=0;
    int cnt=0;
    while(i<ALL_month){
        total[i].month=i+1;
        total[i].days=31;
        cnt=0;
        while(cnt<size){
            total[i].name[cnt]=name_def[i][cnt];
            cnt++;
        };
        i++;
        if(i==4||i==6||i==9||i==11){
            total[i-1].days=30;
        }
        if(i==2){
            total[i-1].days=28;
        }
    }
    i=0;
    int sum=0;
    for(i=0;i<m;i++){
        sum+=total[i].days;
    }
    return sum;    
}
