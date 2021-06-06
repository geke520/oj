// 给出一个不多于5位的整数，要求
// 1、求出它是几位数 2、分别输出每一位数字 3、按逆序输出各位数字，
// 例如原数为321,应输出123
// 三行 第一行 位数 第二行 用空格分开的每个数字，注意最后一个数字后没有空格 第三行 按逆序输出这个数
#include<bits/stdc++.h>
using namespace std;
#define N 5
void nixu(int a)
{
    int flag = 0;
    if(a>9999)
    {
        cout << 5 << endl;
        flag = 5;
    }
    if(a<10000&&a>999)
    {
        cout << 4 << endl;
        flag = 4;
    }
    if(a<1000&&a>99)
    {
        cout << 3 << endl;
        flag = 3;
    }
    if(a<100&&a>9)
    {
        cout << 2 << endl;
        flag = 2;
    }
    if(a<10)
    {
        cout << 1 << endl;
        flag = 1;
    }
    for (int i = 0; i < flag; i++)
    {
        int temp = pow(10,(flag-i-1));
        temp = a / temp % 10;
        cout << temp << " ";
    }
    cout <<endl;
    for (int j = 0; j < flag; j++)
    {
        int temp = pow(10,j+1);
        temp = a %temp/(temp/10);
        cout << temp;
    }
}
int main()
{
    int a=0;
    cin >> a;
    nixu(a);
}