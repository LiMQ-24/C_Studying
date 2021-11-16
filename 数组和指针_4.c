/*
编写一个函数
返回存储在double类型数组中最大值的下标
并在一个简单的程序中测试该函数
*/
#include<stdio.h>
int index_max(double*p,int number);
#define size 10
int main(int argc,char const*argv[])
{
    double a[size]={0,1,2,3,4,5,9,6,7,8,};
    int ret;
    ret=index_max(a,size);
    printf("%d\n",ret);
return 0;
}
int index_max(double*p,int number)
{
    int i;
    int max_index=0;
    double max_value=*p;
    for(i=1;i<number;i++){
        if(*(p+i)>max_value){
            max_value=*(p+i);
            max_index=i;
        }
    }
return max_index;
}
