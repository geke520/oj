// 输入N个整数，输出这个整数两两组合且不重复的所有二元组，
// 要求从小到大输出并且用括号的形式。
// 第一行输入一个整数N，N<=30。
// 第二行输入N个整数。

#include<bits/stdc++.h>
#define N 30
using namespace std;
void bubblesort(int a[],int &n)
{
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        bool flag=false;
        for(j=n-1;j>i;j--)
        {
            if(a[j-1]>a[j])
            {
                swap(a[j - 1], a[j]);
                flag = true;
            }
        }
        if(flag==false)
            return;
    }
}
void eryuanzu(int a[],int n)
{
    bubblesort(a, n);
    for (int i = 0;i<n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j!=i)
            {
                if(a[i]!=a[i-1]&&a[j]!=a[j-1])
                    cout << "(" << a[i] << "," << a[j] << ")" << endl;
            }else{
                if(a[j+1]==a[j]&&a[i]!=a[i-1])
                    cout << "(" << a[i] << "," << a[j] << ")" << endl;
            }
        }
    }
}
int main()
{
    int n,a[N]={0};
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> a[i];
    eryuanzu(a, n);
}