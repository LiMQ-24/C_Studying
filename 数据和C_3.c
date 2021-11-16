/*
编写一个程序
发出一声警报
然后打印下面的文本：
Startled by the sudden sound, Sally shouted,
"By the Great Pumpkin, what was that!"
*/
#include<stdio.h>
int main(int argc,char const*argv[])
{
    printf("\a");
    printf("Startled by the sudden sound, Sally shouted,\n\
\"By the Great Pumpkin, what was that!\"");
return 0;
}
