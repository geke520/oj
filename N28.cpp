// ACM星球的程序艺术学院的T和Y相恋了。Y快要毕业了，为了前途，Y也许要去别的星球发展他的事业。
// 于是，T和Y开始计划以后如何见面。T有个好主意，她跟Y约定在距离ACM星球和Future星球连线的中点
// 最短的Heart星球见面，你能帮他们找出来浪漫的Heart星球吗？
// 首行为一个数N,表示有N个星球。 接下来N行，每行包括三个小数X,Y,Z，表示一个星球的坐标。
// 第N+2行包括三个小数X,Y,Z，表示ACM星球的坐标。 第N+3行包括三个小数X,Y,Z，表示Future星球的坐标。
// N<=5000,1<=X,Y,Z<=99999

#include<bits/stdc++.h>
#define N 5002
using namespace std;
void heart(double x[],double y[],double z[],int n)
{
    double h = 200000.0;
    double temp=0.0;
    x[n] = 0.5 * (x[n] + x[n + 1]);
    y[n] = 0.5 * (y[n] + y[n + 1]);
    z[n] = 0.5 * (z[n] + z[n + 1]);
    int a=-1;
    for (int i = 0; i < n;i++)
    {
        temp = sqrt((x[i] - x[n]) * (x[i] - x[n]) + (y[i] - y[n]) * (y[i] - y[n]) + (z[i] - z[n]) * (z[i] - z[n]));
        if(h>temp)
        {
            h = temp;
            a = i;
        }
    }
    cout.precision(3);
    cout.setf(ios::fixed);
    cout << x[a] << " " << y[a] << " " << z[a];
}
int main()
{
    int n = 0;
    double x[N] = {0}, y[N] = {0}, z[N] = {0};
    cin >> n;
    for (int i = 0; i < n + 2;i++)
    {
        cin >> x[i] >> y[i] >> z[i];
    }
    heart(x, y, z, n);
    return 0;
}