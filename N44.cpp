// 求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字。
#include<bits/stdc++.h>
using namespace std;
long int factorial(int n)
{
    long int S = 1;
    if(n==1)
        return 1;
    for (int i = 1; i <= n; i++)
    {
        S *= i;
    }
    return S+factorial(n-1);
}
int main()
{
    int n = 0;
    cin >> n;
    cout << factorial(n);
}