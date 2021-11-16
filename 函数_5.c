/*
编写并测试一个函数
该函数以3个double变量的地址作为参数
把最小值放入第1个变量
中间值放入第2个变量
最大值放入第3个变量
*/
#include<stdio.h>
void Sort(double*x,double*y,double*z);
int main(int argc,char const*argv[])
{
    double number1,number2,number3;
    scanf("%lf %lf %lf",&number1,&number2,&number3);
    Sort(&number1,&number2,&number3);
    printf("%.2lf %.2lf %.2lf\n",number1,number2,number3);
return 0;
}
void Sort(double*x,double*y,double*z)
{
/*
    int i,j;
    double a[3];
    a[0]=*x;
    a[1]=*y;
    a[2]=*z;
    double middle;
    for(i=0;i<3;i++){
        for(j=1;j<3;j++){
            if(a[j-1]<a[j]){
                middle=a[j];
                a[j]=a[j-1];
                a[j-1]=middle;
            }
        }
    }
    *x=a[0];
    *y=a[1];
    *z=a[2];
*/
    double max=*x;
    double middle=*y;
    double min=*z;
    if(*x<*y){
        if(*x<*z){
            min=*x;
            if(*z<*y){
                max=*y;
                middle=*z;
            }else{
                max=*z;
                middle=*y;
            }
        }else{
            max=*y;
            middle=*x;
        }
    }
    *x=max;
    *y=middle;
    *z=min;
}
