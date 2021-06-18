// 输入两个正整数m和n，求其最大公约数和最小公倍数。
#include<bits/stdc++.h>
using namespace std;
void Calculator(int m,int n)
{
    int max = 1, min = m*n;
    bool flag = true;
    for(int i=1;i<=(m < n ? m : n);i++)
    {
        if(m%i==0&&n%i==0)
            max = i;
        if((m*i)%n==0&&flag)
        {    
            min = m*i;
            flag = false;
        }
    }
    cout << max <<" "<< min;
}
int main()
{
    int m = 0, n = 0;
    cin >> m >> n;
    Calculator(m, n);
    return 0;
}