// 某种细菌（用'*'表示）繁殖遵循一定的规律。第一天的数量为1，以后按照如下方式繁殖：
// 第一天:
// *
// 第二天:
// *
// ***
// *
// 第三天:
// *
// ***
// *****
// ***
// *
// 。。。。。。。。。
// 你需要计算第x天的细菌数量。
// 第一行一个N(<=1000),下面将有N行测试数据，每个测试数据为第x( 0 <= x <= 1000)天.
// 输入0的时候输出为1.
// 对于每个第X天，输出那一天的细胞数量。

#include<bits/stdc++.h>
using namespace std;
int bacterium(int x)
{
    if(x==1)
        return 1;
    if(x==2)
        return 5;
    return bacterium(x - 1) +4*x-4;
    //4*x-4=2*x-1+2*(x-1)-1
}
int main()
{
    int n = 0, x = 0;
    cin >> n;
    for (int i = 0;i<n;i++)
    {
        cin >> x;
        cout << bacterium(x) <<endl;
    }
}