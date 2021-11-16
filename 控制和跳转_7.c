/*
编写一个程序，提示用户输入一周工作的小时数，
然后打印工资总额、税金和净收入
做如下假设：
a. 基本工资=10.00美元/小时
b. 加班（超过40小时）=1.5倍的时间
c. 税率：   前300美元为15%
            续150美元为20%
            余下的为25%
用#define定义符号常量，不用在意是否符合当前的说法
*/
#include<stdio.h>
int main(int argc,char const*argv[])
{
    int times;
    printf("Please input your working hours:");
    scanf("%d",&times);
    int base_pay;
    base_pay=10*times;
    double work_overtime=0;
    double work_overtime_pay=0;
    if(times>40){
        work_overtime=times-40;
        work_overtime_pay=work_overtime*10;
    }
    double salary;
    salary=base_pay+work_overtime_pay;
    double tax1;
    double tax2;
    double tax3;
    if(((int)salary%300)!=0){
        tax1=300*(15/100);
    }
    if((int)salary%450!=0){
        tax2=150*(20/100);
        tax3=(salary-450)*(25/100);
    }
    double tax;
    tax=tax1+tax2+tax3;
    double salary_end=salary-tax;
    printf("%lf\n",salary_end);
return 0; 
}
