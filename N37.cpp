// 有一个函数
//      / x        x<1
// y=| 2x-1   1<=x<10
//      \ 3x-11  x>=10
// 写一段程序，输入x，输出y

#include<bits/stdc++.h>
using namespace std;
int f(int x)
{
    if(x<1)
        return x;
    if(x>=1&&x<10)
        return 2*x-1;
    return (3 * x - 11);
}
int main()
{
    int x=0;
    cin >> x;
    x=f(x);
    cout << x;
    return 0;
}