/*
1个水分子的质量约为3.0X10^-23克
1夸脱水大约是950克
编写一个程序，
提示用户输入水的夸脱数，并显示水分子的数量
*/
#include<stdio.h>
int main(int argc,char const*argv[])
{
    int Kua;
    printf("Input a number:");
    scanf("%d",&Kua);
    printf("%.4e\n",(Kua*950)/(3e-23));
return 0;
}
