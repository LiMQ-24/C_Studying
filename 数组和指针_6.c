/*
编写一个函数
把double类型数组中的数据倒序排列
并在一个简单的程序中测试该函数
*/
#include<stdio.h>
#define size 10
void Reverse_array(double*p,int number);
int main(int argc,char const*argv[])
{
    double a[size]={9,1,2,4,3,7,8,5,6,0,};
    Reverse_array(a,size);
    int i=0;
    while(i<size){
        printf("%.1lf\n",*(a+i));
        i++;
    }
return 0;
}
void Reverse_array(double *p,int number)
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
}
