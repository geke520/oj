// 从一组数据中随机抽取几个数
#include<iostream>
using namespace std;
void sum()
{
    int sum = 0;
    for (int i = 1; i <= 20; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}
int main()
{
    sum();
}