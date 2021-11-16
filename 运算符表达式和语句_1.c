/*
编写一个程序
把用分钟表示的时间转换称用小时和分钟表示的时间
使用#define或const创建一个表示60的符号常量或const常量
通过while循环让用户重复输入值
指导用户输入小于或等于0的值才停止循环
*/
#include<stdio.h>
int main(int argc,char const*argv[])
{
    int minutes;
    printf("If you want to exit, Please Input 0\n");
    printf("Input minutes:");
    scanf("%d",&minutes);
    int i;
    int minute;
    int hour;
    while(minutes!=0){
        i=0;
        hour=minutes/60;
        minute=minutes%60;
        if(minute!=0){
        printf("%d小时%d分\n",hour,minute);
        }else{
            printf("%d小时\n",hour);
        }
        printf("Input minutes:");
        scanf("%d",&minutes);
    }
return 0;
}
