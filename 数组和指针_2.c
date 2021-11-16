/*
编写一个程序
初始化一个double类型的数组
然后把该数组的内容拷贝至3个其他数组中
在main（）中声明这4个数组
使用带数组表示法的函数进行第1份拷贝
使用带指针表示法和指针递增的函数进行第2份拷贝
把目标数组名、源数组名和指向源数组名和待拷贝的元素个数
作为前两个函数的参数
第3个函数以目标数组名、源数组名和指向源数组最后一个元素
后面的元素的指针
也就是说给定以下声明，则函数调用如下所示：
double source[5]={1.1,2.2,3.3,4.4,5.5,};
double target1[5];
double target2[5];
double target3[5];
copy_arr(target1,source,5);
copy_ptr(target2,source,5);
copy_ptrs(target3,source,5 )
*/
#include<stdio.h>
#define size 5
void copy_arr(double target1[],double source[],int n);
void copy_ptr(double*target2,double*source,int n);
void copy_ptrs(double target3[],double source[],double*q);
int main(int argc,char const*argv[])
{
    double source[size]={1.1,2.2,3.3,4.4,5.5,};
    double target1[size];
    double target2[size];
    double target3[size];
    copy_arr(target1,source,size);
    copy_ptr(target2,source,size);
    copy_ptrs(target3,source,&source[5]);
    int i;
    for(i=0;i<size;i++){
        printf("%.1lf\n",target3[i]);
    }
return 0;
}
void copy_arr(double target1[],double source[],int n)
{
    int i;
    for(i=0;i<n;i++){
        target1[i]=source[i];
    }
}
void copy_ptr(double*target2,double*source,int n)
{
    int i;
    for(i=0;i<n;i++){
        *(target2+i)=*(source+i);
    }
}
void copy_ptrs(double target3[],double source[],double*q)
{
    int i=0;
    while(&source[i]!=q){
        target3[i]=source[i];
        i++;
    }
}
