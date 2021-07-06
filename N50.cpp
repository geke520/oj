// 用迭代法求。求数字a平方根的迭代公式为：
// X[n+1]=1/2(X[n]+a/X[n])
// 要求前后两次求出的得差的绝对值少于0.00001。 输出保留3位小数】
#include<bits/stdc++.h>
using namespace std;
int n = 0;
double my_sqrt()
{
    double a, b = 1.0;
    for (int i = 0; fabs(a - b) >= 0.00001;i++)
    {
        a = b;
        b = 0.5 * (a + n / a);
    }
    return b;
}
int main()
{
    double x = 1.0;
    cin >> n;
    x = my_sqrt();
    cout << fixed << setprecision(3);
    cout << x;
    }