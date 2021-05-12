// 定义一个结构体变量（包括年、月、日），编程序，要求输入年月日,
// 计算并输出该日在本年中第几天。
// 输入三个整数(并且三个整数是合理的,既比如当输入月份的时候应该在1 至12 之间，
//  不应该超过这个范围)否则输出Input error!
#include<iostream>
using namespace std;
struct stu{
    int year; //年份
    int mouth; //月份
    int day; //日
}date;
int day(int y,int m,int d)
{
    int day=0;// 用oj我居然吃了没有赋初值亏！！！！！！！！！！！！
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(m<1||m>12||d>31||d<1||y<0||(!((y%4==0&&y%100!=0)||y%400==0)&&m==2&&d==29))
        return -1;
    else{
        for (int i = 0; i < m-1;i++)
        {
            if ((y%4==0 &&y%100!=0)||y%400==0)//闰年判断！！！！关键点：1、能被4整除 且 不能被100整除  或者  2、能够被400整除
            {
                a[1]=29;
                day += a[i];
            }else{
                day += a[i];
            }
        }
        day = day + d;
        return day;
    }
}
int main()
{
    int a;
    int i = 0;
    while(cin >> date.year >> date.mouth >> date.day)
    {
        a = day(date.year, date.mouth, date.day);
        if(a==-1)
            cout << "Input error!" << endl;
        else
            cout << a<< endl;
        i++;
    }
    return 0;
}