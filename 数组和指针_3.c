/*
编写一个函数
返回存储在int类型数组中的最大值
并在一个简单的程序中测试该函数
*/
#include<stdio.h>
#define size 10
int Max(int*q,int number);
int main(int argc,char const*argv[])
{
    int a[size]={10,2,3,4,5,6,7,8,9,0,};
    Max(a,size);
    printf("%d\n",a[0]);
return 0;
}
int Max(int*q,int number)
{

    int i;
    int j;
    int middle;
    for(i=0;i<number;i++){
        for(j=0;j<number-1;j++){
            if(*(q+j)<*(q+j+1)){
                middle=*(q+j);
                *(q+j)=*(q+j+1);
                *(q+j+1)=middle;
            }
        }
    }
}
