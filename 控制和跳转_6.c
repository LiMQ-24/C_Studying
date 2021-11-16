/*
编写程序读取输入，直到#停止，报告ei出现的次数。
提示：该程序要记录前一个字符和当前字符，
用"(Receive your eieio award")这样的输入来测试
*/
#include<stdio.h>
#define size 20
int main(int argc,char const*argv[])
{
    char ch[size];
    int cnt=0;
    ch[0]=getchar();
    int i=1;
    while(ch[i-1]!='#'){
        ch[i]=getchar();
        if((int)(ch[i-1])==101&&(int)(ch[i])==105){
            cnt++;
        }
        i++;
    }
    printf("counter=%d\n",cnt);
return 0;
}
