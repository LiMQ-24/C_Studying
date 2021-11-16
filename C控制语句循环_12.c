/*
考虑下面连个无限序列：
1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 +...
1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 +...
编写一个程序计算这两个无限序列的总和，
直到达到某次数，
提示：
奇数个-1相乘得-1，偶数个-1相乘得1
让用户交互式的输入指定的次数，当用户输入0或负值时结束输入
查看运行100项，1000项，10000项后的总和
是否发现每个序列都收敛与某值？
*/
#include<stdio.h>
#include<math.h>
int main(int argc,char const*argv[])
{
    while(1){
        int upper_limits;
        printf("Input a upper limits:");
        scanf("%d",&upper_limits);
        if(upper_limits<=0){
            break;
        }
        int i=1;
        double result=0;
        while(i<upper_limits+1){
            result=1.0/i+result;
            i++;
        }
        double ret=0;
        int j=1;
        double value;
        while(j<upper_limits+1){
            value=pow(-1,j);
            ret=(-value)*(1.0/j)+ret;
            j++;
        }
        printf("Output %lf\n",result);
        printf("Output %lf\n",ret);
    }
return 0;
}
