/*
编写一个程序打印一个表格，
每一行打印一个整数、该数的平方、该数的立方
要求用户输入表格的上下限
使用一个for循环
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(int argc,char const*argv[])
{
    system("pause");
    int lower_limit;
    int upper_limit;
    printf("Input upper limit:");
    scanf("%d",&lower_limit);
    printf("Input lower limit:");
    scanf("%d",&upper_limit);
    int size=(upper_limit-lower_limit)+1;
    double integer[size];
    double square[size];
    double cube[size];
    int i;
    for(i=0;i<size;i++){
        integer[i]=lower_limit++;
    }
    for(i=0;i<size;i++){
        square[i]=pow(integer[i],2);
        cube[i]=pow(integer[i],3);
    }
    
    printf("integer\t\tsquare\t\t\tcube\n");
    for(i=0;i<size;i++){
        printf("%.0lf\t\t%.0lf\t\t\t%.0lf\n",integer[i],square[i],cube[i]);
    }
    system("pause");
return 0;
}
