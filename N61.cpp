// 第一行只有一个数N,下面将跟着2N行数据.在前N行数据中,对于每行数据,最开头一个数字number,
// 表明这一行总共有number个数,number的下一个数为i,代表编号为i的那个城镇.这行余下的就是跟
// i有公路连接的城镇的(编号)名单，且只能从城镇i驶向其他城镇。如 4 1 2 3，表明:此行有4个数,
// 跟城镇1有公路连接的城镇是编号为2和3的城镇.是从1连到2 和3 ,不能从2 和3 连到1.在后N行数据中,
// 每行由两个数字组成a,b(表示城镇的编号).对于每个输入的数有如下关系 0 <= input_number <= 1000 .
// 对于输入数据中的每个a,b,判断是否可以从城镇a通过公路到达城镇b,如果可以,输出Yes;否则输出No.
#include<bits/stdc++.h>
using namespace std;
#define M 10
#define N 10
int main()
{
    int a[M][N]={0};
    int n = 0;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        int m = 0, x = 0, y = 0;
        cin >> m;
        cin >> x;
        for (int j = 2; j < m; j++)
        {
            cin >> y;
            a[x][y] = 1;
        }
    }
    for (int k = 0; k < n;k++)
    {
        int c = 0, d = 0;
        cin >> c;
        cin >> d;
        if(a[c][d]==1)
            cout << "Yes"<<endl;
        else
        {
            for (int l = 0;l<M;l++)
            {
                int wp;
            }
        }
        cout << "No" << endl;
    }
    return 0;
}