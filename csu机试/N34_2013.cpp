// “水仙花数”是指一个三位数，它的各位数字的立方和等于其本身，比如：153=1^3+5^3+3^3。
// 现在要求输出所有在m和n范围内的水仙花数。
// 输入数据有多组，每组占一行，包括两个整数m和n（100<=m<=n<=999），输入为0 0时表示输入数据结束（不需要输出）。

// 对于每个测试实例，要求输出所有在给定范围内的水仙花数，就是说，输出的水仙花数必须大于等于m,并且小于等于n，
// 如果有多个，则要求从小到大排列在一行内输出，之间用一个空格隔开（末尾有空格）; 
// 如果给定的范围内不存在水仙花数，则输出no; 
// 每个测试实例的输出完毕后换行。

#include<iostream>
#define M 1000
using namespace std;
void shuixianhua(int m[],int n[])
{
    // a百位 b十位 c个位
    bool flag = false;
    int a, b, c;
    for (int i = 0;;i++)
    {
        if( m[i] == 0 && n[i] == 0)
            break;
        for (int j = m[i]; m[i]>100&&j <= n[i];j++)
        {
            // cout << "j" << j << endl;
            a = j / 100;
            b = (j / 10) % 10;
            c = j % 10;
            if((a*a*a+b*b*b+c*c*c)==j)
            {
                cout << j << " ";
                flag = true;
            }
        }
        if(flag==false)
        {
            cout << "no" << endl;
        }
        else
        {
            flag = false;
            cout << endl;
        }
    }
}
int main()
{
    int m[M] = {-1}, n[M] = {-1};
    for (int i = 0;;i++)
    {
        cin >> m[i] >> n[i];
        if( m[i] == 0 && n[i] == 0)
            break;
    }
    shuixianhua(m, n);
}