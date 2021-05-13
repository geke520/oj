// 给定一段连续的整数，求出他们中所有偶数的平方和以及所有奇数的立方和。
#include <iostream>
using namespace std;
void calculate(int m, int n)
{
    int sum1 = 0, sum2 = 0;
    if (m > n)
    {
        int temp = 0;
        temp = n;
        n = m;
        m = temp;
    }
    for (int i = m; i <= n; i++)
    {
        if (i % 2 == 0)
            sum1 += (i * i);
        else
            sum2 += (i * i * i);
    }
    cout << sum1 << " " << sum2 << endl;
}
int main()
{
    int m = 0, n = 0;
    while (cin >> m >> n)
    {
        calculate(m, n);
    }
}