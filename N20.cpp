// 输入一个整数，输出其最长连续因子。
// 例如
// 输入：60
// 输出：2 3 4 5 6
// 注意：1不算因子
#include<iostream>
#define N 10000
using namespace std;
void factor(int x)
{
    int a=2;
    for (int i = 2; i <= x; i++)
    {
        if(x%i==0)
        {
            if(i==2)
                cout << i << " ";
            if (i > 2&&i == (a + 1))
            {
                cout << i <<" ";
                a = i;
            }
                
        }
    }
}
int main()
{
    int x;
    cin >> x;
    factor(x);
    return 0;
}