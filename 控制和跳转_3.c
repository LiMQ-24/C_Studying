/*
编写一个程序
读取整数直到用户输入0
输入结束后，程序应报告用户输入的偶数（不包括0）个数
这些偶数的平均值，输入的奇数个数及其奇数的平均值
*/
#include<stdio.h>
#define size 10
int main(int argc,char const*argv[])
{
    int Number[size];
    int i;
    int number_even=0;
    int number_Odd=0;
    int sum_even=0;
    int sum_Odd=0;
    for(i=0;i<size;i++){
        scanf("%d",&Number[i]);
        if(Number[i]!=0&&Number[i]%2==0){
            number_even=number_even+1;
            sum_even+=Number[i];
        }else if(Number[i]!=0){
            number_Odd=number_Odd+1;
            sum_Odd+=Number[i];
        }
        if(Number[i]==0){
            printf("Interrupt\n");
            break;
       }
    }
    printf("even number:%d-%d\n",number_even,sum_even/number_even);
    printf("Odd number :%d-%d\n",number_Odd,sum_Odd/number_Odd);
return 0;
}
