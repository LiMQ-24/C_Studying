/*
使用编程2中的拷贝函数
把一个内含7个元素的数组中
第3~第5个元素拷贝至内涵3个元素的数组中
该函数本身不需要修改
只需要选择合适的实际参数（实际参数不需要是数组名
和数组大小，只需要是数组元素的地址和待处理元素的个数）
*/
#include<stdio.h>
#define size 7
void Copy_some(double*p,int number);
int main(int argc,char const*argv[])
{
    double a[size]={0,1,2,3,4,5,6,};
    Copy_some(&a[2],3);
}
void Copy_some(double*p,int number)
{
    double b[number];
    int i;
    for(i=0;i<number;i++){
        b[i]=*(p+i);
    }
    i=0;
    while(i<number){
        printf("%.1lf\n",b[i]);
        i++;
    }
}
