/*
编写一个函数
返回存储在double类型数组中最大值与最小值的差值
并在一个简单的程序中测试该函数
*/
#include<stdio.h>
double Difference(double*p,int number);
#define size 10
int main(int argc,char const*argv[])
{
    double a[size]={3,4,5,6,7,1,2,0,9,8,};
    double ret;
    ret=Difference(a,size);
    printf("%lf\n",ret);
return 0;
}
double Difference(double*p,int number)
{
    int i,j;
    double middle;
    for(i=0;i<number;i++){
        for(j=0;j<number-1;j++){
            if(*(p+j)>*(p+j+1)){
                middle=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=middle;
            }
        }
    }
    return *(p+number-1)-*(p);
}
