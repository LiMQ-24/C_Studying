/*
编写一个程序
在数组中读入8个整数
然后按倒序打印这8个整数
*/
#include<stdio.h>
int main(int argc,char const*argv[])
{
    int a[8];
    printf("Input eight integer:\n");
    int i;
    for(i=0;i<8;i++){
        scanf("%d",&a[i]);
    }
    printf("Output reverse integer:\n");
    for(i=7;i>=0;i--){
        printf("%d\n",a[i]);
    }
return 0;
}
