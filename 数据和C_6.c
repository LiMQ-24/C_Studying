/*
1英寸相当于25.4厘米
编写一个程序，提示用户输入身高（/英寸）
然后以厘米为单位显示身高
*/
#include<stdio.h>
int main(int argc,char const*argv[])
{
    int H;
    printf("Input your height(inche):");
    scanf("%d",&H);
    printf("Output yout height(cm):%.2f",H*25.4);
return 0;
}
