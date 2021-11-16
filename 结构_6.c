/*
巨人航空公司的机群由12个座位的飞机组成
他每天飞行一个航班
根据下面的要求，编写一个作为预定程序
a.该程序使用一个内涵12个结构的数组
每个结构中包括：
一个成员表示作为编号
一个成员表示座位是否已被预订
一个成员表示预定人的名
一个成员表示预定人的姓
b.该程序显示下面的菜单：
To Choose a function, enter its letter label:
a) Show number of empty seats
b) Show list of empty seats
c) Show alphabetical list of seatsa
d) Assign a customer to a seat assignment
3) Delete a seat assignment
f) Quit
c. 该程序嫩给成功执行上面给出的菜单
选择d和e要提示用户进行额外输入
每个选项都能让用户中止输入
执特定程序后该用户在此显示菜单，除非用户选择f）
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define size 15
#define size1 12
struct seat{
    int seat_number;
    int empty;
    char firstname[size];
    char lastname[size];
};
int main(int argc,char const*argv[])
{
    struct seat total[size1];
    struct seat*p=total;
    int i=0;
    while(i<size1){
        (p+i)->seat_number=i;
        (p+i)->empty=0;
        *((p+i)->firstname)='\0';
        *((p+i)->lastname)='\0';
        i++;
    }
    int value=0;
    char str[2];
    int cnt=0;
    int count=0;
    int count1=0;
    int middle=0;
    int j=1;
    while(true){
        printf("\nSTART PLEASE:\n");
        printf("To choose a function, enter its letter label:\n");
        printf("a) Show number of empty seats\n");
        printf("b) Show list of empty seats\n");
        printf("c) Show alphabetical list of seats\n");
        printf("d) Assign a customer to a seat assignment\n");
        printf("e) Delete a seat assignment\n");
        printf("f) Quit\n");
        printf("Please input a letter label:\n");
        scanf("%s",str);
        value=(int)str[0];
        cnt=0;
        count=0;
        count1=0;
        middle;
        switch(value){
            case 97:
                printf("Show number of empty seats:\n");
                cnt=0;
                while(cnt<size1){
                    if((p+cnt)->empty==0){
                        printf("%d_Number\n",(p+cnt)->seat_number);
                        break;
                    }
                    cnt++;
                }break;
            case 98:
                printf("Show list of empty seats:\n");
                cnt=0;
                while(cnt<size1){
                    if((p+cnt)->empty==0){
                        printf("%d_Number\n",(p+cnt)->seat_number);
                    }
                    cnt++;
                }break;
            case 99:
                printf("Show alphabetical list of seats\n");
                cnt=0;
                int sort[size1];
                count=0;
                while(cnt<size1){
                    if((p+cnt)->empty==0){
                        sort[count]=(p+cnt)->seat_number;
                        count++;
                    }
                    cnt++;
                }
                for(cnt=0;cnt<count;cnt++){
                    for(count1=0;count1<count-1;count1++){
                        if(sort[count1]>sort[count1+1]){
                            middle=sort[count1];
                            sort[count1]=sort[count1+1];
                            sort[count1+1]=middle;
                        }
                    }
                }
                for(cnt=0;cnt<count;cnt++){
                    printf("%d_Number\n",sort[cnt]);
                }
                break;
            case 100:
                printf("Assign a customer to a seat assignment:\n");
                cnt=0;
                while(cnt<size1){
                    if((p+cnt)->empty==0){
                        (p+cnt)->empty=1;
                        scanf("%s %s",(p+cnt)->firstname,(p+cnt)->lastname);
                        printf("%s %s %d_Number\n",(p+cnt)->firstname,(p+cnt)->lastname,(p+cnt)->seat_number);
                        break;
                    }
                    cnt++;
                }
                break;
            case 101:
                printf("Delete a seat assignment:\n");
                cnt=0;
                scanf("%d",&cnt);
                (p+cnt)->empty=0;
                count=0;
                while(count<size){
                    (p+cnt)->firstname[count]='\0';
                    (p+cnt)->lastname[count]='\0';
                    count++;
                }
                break;
            case 102:
                printf("QUIT\n");
                break;
            }
        if(value==102){
            break;
        }
        }
return 0;
}
