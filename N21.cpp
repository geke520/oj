// 复数可以写成A+Bi的形式，其中A是实部，B是虚部。
// 从键盘输入两个复数，做加法或乘法并输出结果。
// 例如
// 输入：4.2 2.5 2 -1.5 +
// 输出：6.2 1.0
// 输入：2.5 3 -1 2.4 *
// 输出：-9.7 3.0

#include<bits/stdc++.h>
using namespace std;
void fushu(float a[],float b[],char c)
{ 
    cout.setf(ios::fixed);
    if(c=='+')
        cout << setprecision(1) << a[0] + a[1] << " " << b[0] + b[1];
    if(c=='*')
        cout << setprecision(1) << a[0] * a[1] - b[0] * b[1] << " " << b[0] * a[1] + b[1] * a[0];
}
int main()
{
    float a[2] = {0.0}, b[2] = {0.0};
    char c='0';
    cin >> a[0] >> b[0] >> a[1] >> b[1] >> c;
    fushu(a, b, c);
}