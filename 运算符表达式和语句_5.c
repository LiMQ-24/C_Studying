/*
修改程序addemup.c
你可以认为addemup.c是计算30天里赚多少钱的程序
（假设第一天赚$1,第二天赚$2,第三天赚$3，以此类推）
修改程序，使其可以与用户交互，根据用户输入的天数进行计算
（即，用读入的一个变量来代替20）
*/
#include<stdio.h>
int main(int argc,char const*argv[])
{
    int day;
    printf("Please input the days:");
    scanf("%d",&day);
    int i=0;
    int dollar=1;
    int sum=0;
    while(i<day){
        sum+=dollar;
        dollar++;
        i++;
    }
    printf("You earn %d$ in %d dyas!",sum,day);
return 0;
}
