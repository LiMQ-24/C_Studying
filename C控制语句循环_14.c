/*
编写一个程序
创建一个包含8个元素的double类型数组
使用循环提示用户为第一个数组输入8个值
第二个数组元素的值设置为第一个数组对应元素的累积之和
例如第二个数组的第4个元素的值时第一个数组前4个元素之和
第二个数组的第5个元素的值时第一个数组前5个元素之和（用嵌套循环可以完成
但是利用第二个数组的第5个元素是第二个数组的第4个元素与第一个数组的第5个
元素之和，只用一个循环就能完成任务，不需要使用嵌套循环）。最后，使用循环显示
两个数组的内容，第一个数组显示成一行，第二个数组显示在第一个数组的下一行，
而且每个元素斗鱼第一个数组个元素相对应。
*/
#include<stdio.h>
#define size 8
int main(int argc,char const*argv[])
{
    double Number1[size];
    double Number2[size];
    printf("Input eight number:");
    int i;
    for(i=0;i<size;i++){
        scanf("%lf",&Number1[i]);
    }
    Number2[0]=Number1[0];
    for(i=1;i<size;i++){
        Number2[i]=Number2[i-1]+Number1[i];
    }
    for(i=0;i<size;i++){
        printf("%.0lf\t",Number1[i]);
    }
    printf("\n");
    for(i=0;i<size;i++){
        printf("%.0lf\t",Number2[i]);
    }
    printf("\n");
return 0;
}
