/*
编写一个程序，创建一个有两个成员的结构模板
a.第1个成员是社会保险号
  第2个成员是一个有三个成员的结构
  第一个成员代表名，第二个成员代表中间名，第三个成员代表姓
  创建并初始化内含5个该类型结构的数组
  该程序以下面的格式打印数据：
  Dribble,Flossie M. -- 302039823
如果有中间名，打印它的第一个字母，后面加一个（.）
如果没有中间名，则不用打印点
编写一个程序进行打印，把结构数组传递给这个函数是
b.修改a部分，传递结构的值而不是结构的地址
*/
#include<stdio.h>
#define size1 5
struct n{
    char*firstname;
    char*middlename;
    char*lastname;
};
struct total{
    struct n name;
    double number; 
};
void Print(struct total*p);
int main(int argc,char const*argv[])
{
    struct total person[size1];
    struct total*p=person;
    Print(p); 
    printf("%s,%s %s. --%.0lf\n",p->name.firstname,p->name.lastname,p->name.middlename,p->number);
return 0;
}
void Print(struct total*p)
{
    p->number=302039823;
    struct n *q=&(p->name);
    q->firstname="Dribble";
    q->lastname="Flossie";
    q->middlename="M.";
}
