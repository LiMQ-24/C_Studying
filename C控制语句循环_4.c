/*
使用嵌套循环，按下面的格式打印字母
A
BC
DEF
GHIJ
KLMNO
PQRSTU
如果你的系统不适用以数字顺序编码的代码，
请参照练习3中的方案解决
*/
#include<stdio.h>
int main(int argc,char const*argv[])
{
    int cnt=65;
    int i;
    int j;
    for(i=0;i<6;i++){
        j=0;
        while(j<=i){
        printf("%c",cnt);
        j++;
        cnt++;
        }
        printf("\n");
    }
return 0;
}
