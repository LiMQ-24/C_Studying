/*
Rabnud博士加入了一个社交圈
起初他有5个朋友，他注意到他的朋友数量以
下面的方式增长
第1周少1个朋友，剩下的朋友数量翻倍
第2个少了2个朋友，剩下的朋友数量翻倍
一般而言，第N周少了N个朋友，剩下的朋友数量翻倍
编写一个程序，计算并显示Rabnud博士每周的朋友数量
该程序一直运行，直到超过邓巴数，邓巴数是粗略估算一个人
在社交圈中有稳定关系的成员的最大值，该值大约是150.
*/
#include<stdio.h>
int main(int argc,char const*argv[])
{
    int start=5;
    int Friends;
    int i=1;
    do{
        Friends=(start-i)+(start-i)*2;
        printf("The %d weeks:%d friends\n",i,Friends);
        i++;
        start=Friends;
    }while(Friends<150);
return 0;
}
