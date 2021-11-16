/*
编写一个程序
提示用户输入3组数
每组数包含5个double类型的数
假设用户都正确的响应，不会输入非数值数据
该程序应完成下列任务
a.把用户输入的数据存储在3X5的数组中
b.计算每组5个数据的平均值
c.计算所有数据的平均值
d.找出这15个数据中的最大值
e.打印结果
每个任务都要用单独的函数来完成（使用
传统c处理数组的额方式。
完成任务b
要编写一个计算并返回一维数组平均值的函数
利用循环调用该函数3次
对于处理其他任务的函数
应该把整个数组作为参数，
完成任务c和d的函数应把结果返回到主调函数
*/
#include<stdio.h>
#define ROWS 3
#define COLS 5
void Average_rows(double*p,int row,int col);
void Average_all(double*q,int row,int col);
double Max(double*r,int row,int col);
int main(int argc,char const*argv[])
{
    double source[ROWS][COLS];
    int i,j;
    for(i=0;i<ROWS;i++){
        for(j=0;j<COLS;j++){
            scanf("%lf",&source[i][j]);
        }
    }
    Average_rows(source[0],ROWS,COLS);
    Average_all(source[0],ROWS,COLS);
    double ret;
    ret=Max(source[0],ROWS,COLS);
    printf("Max:%.1lf\n",ret);
return 0;
}
void Average_rows(double*p,int row,int col)
{
    double sum=0;
    int i=0;
    while(i<row*col){
        sum=sum+*(p+i);
        i++;
        if(i%5==0){
            printf("row1_average:%.1lf\n",sum/5);
            sum=0;
        }
    }
}
void Average_all(double*q,int row,int col)
{
    double sum=0;
    int i=0;
    while(i<row*col){
        sum=sum+*(q+i);
        i++;
    }
    printf("All_average:%.1lf\n",sum/(row*col));
}
double Max(double*r,int row,int col)
{
    int i=0;
    int j=0;
    double middle;
    while(j<row*col){
        i=0;
        while(i<row*col-1){
            if(*(r+i)<*(r+i+1)){
                middle=*(r+i);
                *(r+i)=*(r+i+1);
                *(r+i+1)=middle;
            }
            i++;
        }
        j++;
    }
    return *r;
}
