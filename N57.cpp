// 数字的模式是指在一堆给定数字中出现次数最多的数值，如5，5，5，3，3，2，6，4，
// 它的模式就是5。现在你的任务，就是从数字中找到它的模式.
#include<bits/stdc++.h>
using namespace std;
#define N 99999
int main()
{
    int n=0;
    cin >> n;
    int a[n] = {0};
    int b[N] = {0};  
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
        b[a[i]]++;
        // for (int j = 0; j < i;j++)
        // {
        //     if(a[j]==a[i])
        //         b[j]++;
        // }
    }
    int temp = 0;
    for (int i = 1; i < N;i++)
    {
        if(b[0]<b[i])
        {    
            b[0] = b[i];
            temp = i;
        }
    }
    cout << temp;
}