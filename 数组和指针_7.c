/*
编写一个程序
初始化一个double类型的二维数组
使用编程练习2中的一个拷贝函数把该数组中的数据拷贝至
另一个二维数组中（因为二位数组是数组的数组，所以
可以使用处理一维数组的拷贝函数来处理函数的每个
子数组）
*/
#include<stdio.h>
#define size 3
void Copy_array(double p[][size],double q[][size],int number);
int main(int argc,char const*argv[])
{
    double a[size][size]={
        {1,1,1,},
        {2,2,2,},
        {3,3,3,},
    };
    double b[size][size];
    Copy_array(a,b,size);
    int i,j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%.1lf\t",b[i][j]);
        }
        printf("\n");
    }
return 0;
}
void Copy_array(double p[][size],double q[][size],int number)
{
    int i,j;
    for(i=0;i<number;i++){
        for(j=0;j<number;j++){
            *(*(q+i)+j)=*(*(p+i)+j);
        }
    }
}
