/*
编写一个程序
创建一个包含8个元素的int类型数组，
分别把数组元素设置为2的前8次幂
使用for循环设置数组元素的值，
使用do while循环显示数组元素的值
*/
#include<stdio.h>
#include<math.h>
#define size 11
int main(int argc,char const*argv[])
{
    int Number[size];
    int i;
    for(i=0;i<size;i++){
        Number[i]=pow(2,i);
    }
    int j=0;
    do{
        printf("%d\n",Number[j]);
    }while(++j<size);
return 0;
}
