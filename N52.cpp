// 有N个学生，每个学生的数据包括学号、班级、姓名、三门课成绩。从键盘输入N 个
// 学生数据，要求打印出每个学生三门课的平均成绩，以及平均分最高分学生数据（包括学号、
// 班级、姓名、三门课成绩，平均分）。
// 要求：
// 1、 定义学生结构体。
// 2、 用一个函数实现N 个学生数据的输入，用另一个函数负责求每个学生三门课程的平
// 均成绩，再用一个函数求出平均分最高的学生并输出该学生的数据。要求平均分和平均分最高的学生数据都在主函数中输出。
#include <bits/stdc++.h>
using namespace std;
struct Student
{
    string No;
    string Class;
    string Name;
    double grade1;
    double grade2;
    double grade3;
    double average;
};
double avg(double a, double b, double c)
{
    return (a + b + c)/ 3.0;
}
double highgrade = 0.0;
int num = 0;
void high(int i, double avg)
{
    if (highgrade < avg)
    {
        highgrade = avg;
        num = i;
    }
}
int main()
{
    int n = 0, index = 0;
    cin >> n;
    struct Student Stu[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Stu[i].No >> Stu[i].Class >> Stu[i].Name >> Stu[i].grade1 >> Stu[i].grade2 >> Stu[i].grade3;
        Stu[i].average = avg(Stu[i].grade1, Stu[i].grade2, Stu[i].grade3);
        // cout << fixed << setprecision(1);
        // cout << Stu[i].Name << " " << Stu[i].average << endl;
        high(i, Stu[i].average);
        // cout << index<<' '<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << fixed << setprecision(1);
        cout << Stu[i].Name << ' ' << Stu[i].average << endl;
    }
    cout << fixed << setprecision(1);
    cout << Stu[num].No << ' ' << Stu[num].Class << ' ' << Stu[num].Name << ' ' << Stu[num].grade1 << ' ' << Stu[num].grade2 << ' ' << Stu[num].grade3 << ' ' << highgrade;
    return 0;
}