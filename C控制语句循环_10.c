/*
编写一个程序
要求用户输入一个上限整数和一个下限整数
计算从上限到下限范围内所有整数的平方和
并显示计算结果
然后程序继续提示用户输入上限和下限整数
并显示结果
直到用户输入的上限整数等于或小于下限整数为止
程序的运行示例如下：
Enter lower and upper integer limits:5 9
The sums of the squares from 25 to 81 is 255
Enter next set of limits: 3 25
The sums of the squares from 9 to 625 is 5520
Enter next set of limits: 5 5 
Done
*/
#include<stdio.h>
#include<math.h>
double Sum(int*value1,int *value2);
int main(int argc,char const*argv[])
{
    int number1;
    int number2;
    int *p1=&number1;
    int *p2=&number2;
    double result;
    int i=0;
    while(1){
        i++;
        if(i==1){
            printf("Enter lower and upper integer limits:");
            scanf("%d %d",p1,p2);
            if(*p1>=*p2){
                printf("Done\n");
                break;
            }
            result=Sum(p1,p2);
            printf("The sums of the squares form %d to %d is %.0lf\n",*p1,*p2,result);
            }else{
                printf("Enter next set of limits:");
                scanf("%d %d",p1,p2);
                if(*p1>=*p2){
                    printf("Done\n");
                    break;
                }
                result=Sum(p1,p2);
                printf("The sums of the squares from %d to %d is %.0lf\n",*p1,*p2,result);
            }
    }
return 0;
}
double Sum(int*value1,int *value2)
{
    int i=0;
    double ret=0;
    while(i<(*value2-*value1+1)){
        ret=pow((*value1+i),2)+ret;
        i++;
    }
    return ret;
}
