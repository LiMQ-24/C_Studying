/*
使用嵌套循环，按下面的格式打印字符
F
FE
FED
FEDC
FEDCB
FEDCBA
注意：如果你的系统不适用ASCII或其他以数字顺序编码的代码
可以把字符数组初始化为字母表中的字母：
char lets[27]="ABCDEFGHIJKLMNOPQISTUVWXYz";
然后用数组下标选择单独的字母。例如lets[0]是'A'等等
*/
#include<stdio.h>
int main(int argc,char const*argv[])
{
    //printf("%c\n",97);
    int i;
    int j;
    int cnt;
    for(i=0;i<6;i++){
        j=0;
        cnt=70;
        while(j<=i){
            printf("%c",cnt);
            j++;
            cnt--;
        }
        printf("\n");
    }
return 0;
}
