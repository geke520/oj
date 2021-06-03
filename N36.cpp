// 有三个整数a b c,由键盘输入，输出其中的最大的数。

#include<bits/stdc++.h>
using namespace std;

void maxnum(int a,int b,int c)
{
    if(a<b)
        a = b;
    if(a<c)
        a = c;
    cout << a;
}
int main()
{
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    maxnum(a, b, c);
}