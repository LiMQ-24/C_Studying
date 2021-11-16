/*
纸上得来终觉浅，觉知此事须躬行
编写一个程序，调用一个printf（）函数，
把你的名和姓打印在一行
再调用一次printf（）函数，把你的名和姓分别打印再两行
然后，再调用两次printf函数，
把你的名和姓打印在一行
输出应入戏所示（当然要把实力的内容换成你的名字）
Gustav Mahler   <-第1次打印的内容
Gustav          <-第2次打印的内容
Mahler          <-仍然是第2次打印的内容
Gustav Mahler   <-第3次和第4次打印的内容
*/
#include<stdio.h>
int main(int argc,char const*argv[])
{
    printf("Li mingqiang\n");
    printf("Li\nmingqiang\n");
    printf("Li mingqiang\n");
return 0;
}
