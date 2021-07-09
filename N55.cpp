// 将两个给定的距阵(3*3)相乘得到另一个距阵并将其打印出来。
#include <bits/stdc++.h>
using namespace std;
void matrix(int a[][3], int b[][3])
{
    int c[3][3] = {{0}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {    
            c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int a[3][3] = {{0}};
    int b[3][3] = {{0}};
    for (int i = 0; i < 3;i++)
    {
        for (int j = 0; j < 3;j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < 3;i++)
    {
        for (int j = 0; j < 3;j++)
            cin >> b[i][j];
    }
    matrix(a, b);
    return 0;
}