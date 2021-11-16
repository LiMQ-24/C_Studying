/*
使用if else语句编写一个程序读取输入读到#停止，
用感叹号替换句号，用两个感叹号替换原来的感叹号
最后报告进行了多少次替换。
使用switch编写该程序
*/
#include<stdio.h>
int main(int argc,char const*argv[])
{
    char ch;
    int cnt;
    while((ch=getchar())!='#'){
        switch((int)ch){
            case 46:
            printf("!");
            cnt++;
            break;
            case 33:
            printf("!!");
            cnt++;
            break;
            default:
            printf("%c",ch);
        }
    }
    printf("\n");
    printf("counter=%d\n",cnt);
return 0;
}
