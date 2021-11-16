/*
编写一个程序
提示用户输入一个身高（单位：厘米）
并分别以厘米和英尺、英寸为单位显示该值
允许有小数部分
程序应该能让用户重复输入身高，直到用户输入一个非正值，
输出示例如下：
Enter a height in centimeters:182
182.0 cm = 5 feet,11.7 inches
Enter a height in centimeters(<=0 to quit):168.7
168.7 cm = 5 feet, 6.4 inches
Enter a height in centimeters(<=0 to quit): 0
bye
*/
#include<stdio.h>
#define cm_inche 2.54 
#define cm_foot 30.48
int main(int argc,char const*argv[])
{
    float cm;
    printf("Enter a height in centimeters:");
    scanf("%f",&cm);
    while(cm>0){
        float inche=cm/cm_inche;
        float feet=cm/cm_foot;
        printf("%.1f cm = %.1f feet, %.1f inches\n",cm,feet,inche);
        printf("Enter a height in centimeters:");
        scanf("%f",&cm);
        if(cm<=0){
            printf("bye!");
        }
    }
return 0;
}
