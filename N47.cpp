// 有一分数序列： 2/1 3/2 5/3 8/5 13/8 21/13...... 求出这个数列的前N项之和，保留两位小数。
#include<bits/stdc++.h>
using namespace std;
float feibo(float a,float b,int n)
{
    if(n==1)
        return a;
    if(n==2)
        return b;
    return feibo(a,b,n - 1)+feibo(a,b,n - 2);
}
int main()
{
    int n = 0;
    cin >> n;
    float sum = 0.0;
    for (int i = 1; i <= n;i++)
    {
        sum = sum + feibo(2.0, 3.0, i) / feibo(1.0, 2.0, i);
    }
    cout << fixed << setprecision(2);
    cout << sum;
}