// 给你N个整数，要求删除最大和最小的数之后按原顺序输出。
#include<bits/stdc++.h>
#define N 100
using namespace std;

void chuqudaxiao(int n,int a[])
{
    int i = 0, k = 0;
    for (int j = i + 1; j < n;)
    {
        if(a[i]<a[j])
            j++;
        else
        {
            i = j;
            j = i + 1;
        }   
    }
    a[i] = -1;
    for (int y = k + 1; y < n;)
    {
        if(a[k]>a[y])
            y++;
        else
        {
            k = y;
            y = k + 1;
        }
    }
    a[k] = -1;
    for (int x = 0; x < n; x++)
    {
        if(a[x]!=-1)
            cout << a[x]<<" ";
    }
}
int main()
{
    int n = 0, a[N] = {0};
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> a[i];
    chuqudaxiao(n, a);
}
