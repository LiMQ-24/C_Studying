/*
编写一个程序，提示用户输入天数
然后将其转换成周数和天数
例如，用户输入18，则转换成2周4天
以下面的格式显示结果：
18 days are 2 weeks, 4 days.
通过while循环让用户重复重复输入天数
当用户输入一个非正值时（如0或-20）循环结束
*/
#include<stdio.h>
int main(int argc,char const*argv[])
{
    int days;
    printf("Please input the days:");
    scanf("%d",&days);
    while(days>0){
        int weeks=days/7;    
        int day=days%7;
        printf("%d days are %d weeks, %d days\n",days,weeks,day);
        printf("Please input the days:");
        scanf("%d",&days);
        if(days<=0){
            printf("End!");
        }
    }
return 0;
}
