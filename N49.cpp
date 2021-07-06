// 猴子吃桃问题。
// 猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。
// 第二天早上又将剩下的桃子吃掉一半，又多吃一个。以后每天早上都吃了前一天剩下的一半零一个。
// 到第N天早上想再吃时，见只剩下一个桃子了。求第一天共摘多少桃子。
#include<bits/stdc++.h>
using namespace std;
void monkey(int n)
{
    int sum = 1;
    for (int i = 1; i < n; i++)
    {
        sum = (sum + 1) * 2;
    }
    cout << sum;
}
int main()
{
    int n = 0;
    cin >> n;
    monkey(n);
}