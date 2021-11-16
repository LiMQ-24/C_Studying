/*
编写一个程序
显示求模运算的结果
把用户输入的第1个整数作为求模运算符的第2个运算对象
该数再运算过程中保持不变
用户后面输入的数是第1个运算对象
党用户输入一个非正值时
程序结束，并输出示例如下：
This program computes moduli.
Enter an integar to serve as the second operand: 256
Now enter the first operand: 438
438 % 256 is 182
Enter next number for first operand(<=0 to quit): 1234567
1234567 % 256 is 135
Enter next number for first operand(<=0 to quit): 0
Done
*/
#include<stdio.h>
int main(int argc,char const*argv[])
{
    printf("This program computes moduli.\n");
    int i;
    printf("Enter an integar as the second operand:");
    scanf("%d",&i);
    int m;
    printf("Now enter the first operand:");
    scanf("%d",&m);
    while(m>0){
        printf("%d %% %d is %d\n",m,i,m%i);
        printf("Enter next number for first operand(<=0 to quit):");
        scanf("%d",&m);
        if(m==0){
            break;
        }
    }
    if(m==0){
        printf("Done");
    }
return 0;
    
}
