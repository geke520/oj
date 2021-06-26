// 一个数如果恰好等于它的因子之和，这个数就称为"完数"。
// 例如，6的因子为1、2、3，而6=1+2+3，因此6是"完数"。 编程序找出N之内的所有完数，并按下面格式输出其因子：
// 输入描述:
// N
// 输出描述:
// ? its fastors are ? ? ?
#include <bits/stdc++.h>
using namespace std;
void wanshu(int n)
{
    for (int i = 2; i < n; i++)
    {
        int s = 0;
        int a[100] = {0};
        int k = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                s += j;
                a[k] = j;
                k++;
            }
        }
        if (s == i)
        {
            cout << i << " its fastors are";
            for (int i = 0; i < 100; i++)
            {
                if (a[i]!=0)
                    cout << " " << a[i];
            }
            cout << endl;
        }
    }
}
int main()
{
    int n = 0;
    cin >> n;
    wanshu(n);
}