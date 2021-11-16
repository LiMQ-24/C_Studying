/*
编写一个程序
声明一个int类型的3X5二位数组
并用合适的值初始化它
该程序打印数组中的值
然后各值翻倍（即是原值的2倍）
并显示出各元素的新值
编写一个函数显示数组的内同
再编写一个函数把各元素的值翻倍
这两个函数都以函数名和行数作为参数
*/
#include<stdio.h>
#define ROWS 3
#define COLS 5
void Print_array(int*p,int a,int b);
void Print_2(int*q,int a,int b);
int main(int argc,char const*argv[])
{
    int a[ROWS][COLS]={
        {1,1,1,1,1,},
        {2,2,2,2,2,},
        {3,3,3,3,3,}
    };
    Print_array(a[0],ROWS,COLS);
    printf("\n");
    Print_2(a[0],ROWS,COLS);
return 0;
}
void Print_array(int*p,int a,int b)
{
    int i=0;
    int value;
    while(i<a*b){
        value=*(p+i);
        printf("%d,",value);
        i++;
        if(i%5==0){
            printf("\n");
        }
    }
}
void Print_2(int*q,int a,int b)
{
    int i=0;
    while(i<a*b){
        printf("%d,",(*(q+i))*2);
        i++;
        if(i%5==0){
            printf("\n");
        }
    }
}
