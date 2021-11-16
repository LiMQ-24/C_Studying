/*
编写一个程序满足下面的要求
a.外部定义一个有两个成员的结构模板name； 一个字符串存储名，一个字符串存储姓
b.外部定义一个有3个成员的结构模板student：一个name类型的结构，一个grade数组存储3个浮点型分数，一个变量存储3个分数平均数
c.在main（）函数中声明一个内含CSIE（CSIE=4）个students类型结构的数组，并初始化这些结构的名字部分，用函数执行g、e、f和g中描述的任务
d.以交互的方式获取每个学生的成绩，提示用户输入学生的姓名和分数，把分数存储到grade数组相应的结构中，可以在main（）函数或其他函数中用循环来完成
e.计算每个结构的平均分，并把计算后的值赋给合适的成员
f.打印每个结构的平均分，并把计算后的值赋给合适的成员
g.打印班级的平均分，即所有结构的数值成员的平均值
*/
#include<stdio.h>
#define size 3
#define csize 3
#define size1 20
struct name{
    char firstname[size1];
    char lastname[size1];
};
struct st{
    struct name student;
    double grade[size];
    double average;
};
struct object_class{
    double class_chinese;
    double class_math;
    double class_english;
};
void Input_information(struct st*p,int number);
void Average_student(struct st*p,int number);
double Average_class(struct st*q,struct object_class*r,int number,double*t);
int main(int argc,char const*argv[])
{
    struct st stud[csize];
    struct object_class environment;
    struct object_class*r=&environment;
    struct st* p=stud;
    double total[csize];
    double *t=total;
    Input_information(p,csize);
    Average_student(p,csize);
    Average_class(p,r,csize,total);
    int i=0;
    printf("Chinese\tMath\tEnglish\n");
    while(i<csize){
        printf("%.1lf\t",*(t+i));
        i++;
    }
    printf("\nEND\n");
return 0;
}
void Input_information(struct st*p,int number)
{
    int i=0;
    while(i<number){
        scanf("%s %s %lf %lf %lf",(p+i)->student.firstname,(p+i)->student.lastname,&((p+i)->grade[0]),&((p+i)->grade[1]),&((p+i)->grade[2]));
        i++;
    }
}
void Average_student(struct st*p,int number)
{
    int i=0;
    while(i<number){
        (p+i)->average=((p+i)->grade[0]+(p+i)->grade[1]+(p+i)->grade[2]);
        i++;
    }

}
double Average_class(struct st*q,struct object_class*r,int number,double *t)
{
    int i=0;
    r->class_chinese=0;
    r->class_math=0;
    r->class_english=0;
    while(i<number){
        r->class_chinese+=(q+i)->grade[0];
        r->class_math+=(q+i)->grade[1];
        r->class_english+=(q+i)->grade[2];
        i++;
    }
    *t=r->class_chinese/csize;
    *(t+1)=r->class_math/csize;
    *(t+2)=r->class_english/csize;
}
