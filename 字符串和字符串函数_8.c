/*
编写一个名为string_in()的函数，
接受两个指向字符串的指针作为参数，
如果第二个字符串包含在第一个字符串中，
该函数将返回第一个字符串开始的地址，
例如:string_in("hats","at",)
将返回hats中a的地址。
否则，该函数返回空指针，
在一个完整的程序中测试该函数，使用
一个循环给函数提供输入值。
*/
#include<stdio.h>
#define size1 40
#define size2 10
char* string_in(char*s1,char*s2);
int main(int argc,char const*argv[])
{
    char a[size1];
    char b[size2];
    int i=0;
    printf("Input first  string:");
    do{
        a[i]=getchar();
        i++;
    }while(i-1<size1-1&&a[i-1]!=EOF);
    int j=0;
    printf("Input target string:");
    do{
        b[j]=getchar();
        j++;
    }while(j-1<size2-1&&b[j-1]!=EOF);
    char*result;
    result=string_in(a,b);
    printf("%p\n",result);
return 0;
}

char* string_in(char*s1,char*s2)
{
    int i=0;
    int j;
    int n;
    int cnt;
    printf("***********\n");
    printf("%p\n",&s1[3]);
    printf("***********\n");
    while(s1[i]!='\0'||s1[i]!='\n'||s1[i]!=EOF){
        j=0;
        n=i;
        if(s1[n]==s2[j]){
            while(1){
                n++;
                j++;
                if(s1[n]==s2[j]&&s1[n]!='\n'&&s1[n]!='\0'&&s1[n]!=EOF){
                    continue;
                }else if(s2[j]=='\0'||s2[j]=='\n'||s2[j]==EOF){
                    return &s1[i];
                    cnt=1;
                    break;
                    }else{
                        return NULL;
                        cnt=0;
                        break;
                    }
                    
                }
            }
            if(cnt==0||cnt==1){
                break;
            }
        i++;
    }
    
}

