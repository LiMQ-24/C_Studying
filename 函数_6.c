/*
编写一个函数
从标准输入中读取字符
直到遇到文件结尾
程序要报告每个字符是否为字母
如果是，还要报告该字母在字母表中的数值位置
例如
c和C在字母表中的位置都是3，
合并一个函数，以一个字符作为参数
如果该字符是一个字母则返回一个数值位置
否则返回-1
*/
#include<stdio.h>
#include<stdbool.h>
#define size 10
int main(int argc,char const*argv[])
{
    char a[size];
    fgets(a,size,stdin);
    int i=(int)'A';
    int j=(int)'Z';
    int n=0;
    int ret=0;
    int ret1=0;
    for(n=0;n<size;n++){
        for(i;i<=j;i++){
            if((int)a[n]==i){
                ret=i;
                break;
            }
            if((int)a[n]==i+32){
                ret1=i+32;
                break;
            }
        }
        if(ret<91&&ret>=65){
            printf("\n%d\n",ret-64);
            break;
        }
        if(ret1<=122&&ret1>=97){
            printf("\n%d\n",ret1-96);
            break;
        }
    }
return 0;
}
