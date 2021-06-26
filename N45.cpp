// 求以下三数的和,保留2位小数 1~a之和 1~b的平方和 1~c的倒数和
// 1+2+...+a + 1^2+2^2+...+b^2 + 1/1+1/2+...+1/c
#include<bits/stdc++.h>
using namespace std;
void Sn(int a,int b,int c)
{
    float Sn=0.0;
    for (float i = 1; i <= a;i++)
        Sn +=i;
    for (float i = 1; i <= b;i++)
        Sn +=i*i;
    for (float i = 1; i <= c;i++)
        Sn +=1/i;
    printf("%.2f",Sn);
    // cout << fixed << setprecision(2);
    // cout <<endl <<Sn;
}
int main()
{
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    Sn(a, b, c);
}