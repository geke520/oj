// 一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。
// 它在第N次落地时反弹多高？共经过多少米？ 保留两位小数
#include<bits/stdc++.h>
using namespace std;
int m = 0;
float fantan(int n)
{
    if(n==1)
        return 0.5 * m;
    return 0.5 * fantan(n - 1);
}
float jingguo(int n)
{
    // float sum = 1.5*m;
    // for (int i = 2;i<=n;i++)
    // {
    //     sum += (fantan(i)+fantan(i-1));                                                                                                                                  
    // }
    // return sum-fantan(n);// 第N次落地不会反弹所以减去反弹值
    float sum = m;
    for (int i = 2;i<=n;i++)
    {
        sum += fantan(i-1)*2;                                                                                                                                 
    }
    return sum;
}
int main()
{
    int n=0;
    cin >> m >> n;
    cout << fixed << setprecision(2);
    cout << fantan(n) << " " << jingguo(n);
    return 0;
}