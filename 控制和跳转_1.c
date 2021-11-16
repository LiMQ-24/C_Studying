/*
编写一个程序读取输入
直到#字符停止，然后报告读取的空格数，
换行符数和所有其他字符的数量
*/
#include<stdio.h>
#define size 20
int main(int argc,char const*argv[])
{
    char str[size];
    int sum=0;
    int i;
    /*
    for(i=0;i<size;i++){
        scanf("%c",&str[i]);
        if(str[i]==' '){
            sum=sum+1;
        }
        if(str[i]=='#'){
            printf("Interrupt\n");
            break;
        }
    }
    printf("%d\n",sum);
    */
   i=0;
   do{
       scanf("%c",&str[i]);
       if(str[i]==' '){
           sum=sum+1;
       }
       i++;
   }while(i-1<size&&str[i-1]!='#');
   printf("%d\n",sum);
return 0;
}
