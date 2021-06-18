// 输入两个数．第一个为a  ，第二个为n（表示有多少个数相加），其中a和n都是大于１且小于１０的整数．
#include<bits/stdc++.h>
using namespace std;

int Sn(int a,int n)
{
    int sum = a;
    if(n==1)
        return sum;
    else
    {
        for (int i = n; i >1;i--)
        {
            sum += (a * pow(10, i-1));
        }
    }
    return sum+Sn(a,n-1);
}
int main()
{
    int a = 0, n = 0;
    cin >> a >> n;
    cout << Sn(a, n);
}