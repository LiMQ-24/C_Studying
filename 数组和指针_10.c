/*
编写一个函数
把两个数组中相对应的元素相加
然后把结果存储到第3个数组中
也就是说
如果数组1中包含的值是2，4，5，8
数组2中包含的值是1，0，4，6，
那么该函把3，4，9，14赋给第3个数组
函数接受3个数组名和一个数组大小
在一个简单的程序中测试该函数
*/
#include<stdio.h>
#define size 4
void Sum(int a[],int b[],int c[],int number);
int main(int argc,char const*argv[])
{
    int a[size]={2,4,5,8,};
    int b[size]={1,0,4,6,};
    int c[size];
    Sum(a,b,c,size);
    int i=0;
    while(i<size){
        printf("%d,",*(c+i));
        i++;
    }
return 0;
}
void Sum(int a[],int b[],int c[],int number)
{
    int i;
    for(i=0;i<number;i++){
        *(c+i)=*(a+i)+*(b+i);
    }
}
