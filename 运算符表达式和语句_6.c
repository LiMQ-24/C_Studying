/*
修改编程练习5的程序，
使其能够计算整数的平方和（可以认为第1天赚
$1,第二天赚$4,第三天赚$9,以此类推，这看起来很不错）
C没有平方函数，但是可以用n*n来表示n的平方
*/
#include<stdio.h>
#include<math.h>
int main(int argc,char const*argv[])
{
    int day;
    printf("Please input days:");
    scanf("%d",&day);
    int dollar=1;
    int sum=0;
    int i=0;
    int dollars;
    while(i<day){
        dollars=pow(dollar,2);
        sum+=dollars;
        dollar++;
        i++;
    }
    printf("You earn %d$ in %d days!",sum,day);
return 0;
}
