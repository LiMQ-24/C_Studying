/*
编写一个程序
初始化一个double类型的3X5的二维数组
使用一个处理变长数组的函数将其拷贝至另一个二维数组中
还要编写一个以变长数组为形参的函数
显示两个数组的内容
这两个函数应该能处理任意NXM数组（如果编译器不支持变长数组，
就用传统的C函数处理NX5的数组）
*/
#include<stdio.h>
#define ROWS 3
#define COLS 5
void Copy_array(double a[ROWS][COLS]);
int main(int argc,char const*argv[])
{
    double a[3][5]={
        {1,1,1,1,1,},
        {2,2,2,2,2,},
        {3,3,3,3,3,}
    };
    Copy_array(a);
return 0;
}
void Copy_array(double a[ROWS][COLS])
{
    double b[ROWS][COLS];
    int i=0;
    while(i<ROWS*COLS){
        *(*b+i)=*(*a+i);
        i++;
    }
    i=0;
    while(i<ROWS*COLS){
        printf("%.1lf\t",*(*b+i));
        i++;
        if(i%5==0){
            printf("\n");
        }
    }
}
