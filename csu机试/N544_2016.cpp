/* 在一个果园里，多多已经将所有的果子打了下来，而且按果子的不同种类分成了不同的堆。
多多决定把所有的果子合成一堆。 每一次合并，多多可以把两堆果子合并到一起，
消耗的体力等于两堆果子的重量之和。可以看出，所有的果子经过n-1次合并之后，
就只剩下一堆了。多多在合并果子时总共消耗的体力等于每次合并所耗体力之和。 
因为还要花大力气把这些果子搬回家，所以多多在合并果子时要尽可能地节省体力。
假定每个果子重量都为1，并且已知果子的种类数和每种果子的数目，你的任务是设计出
合并的次序方案，使多多耗费的体力最少，并输出这个最小的体力耗费值。 例如有3种果子，
数目依次为1，2，9。可以先将1、2堆合并，新堆数目为3，耗费体力为3。接着，将新堆与原先
的第三堆合并，又得到新的堆，数目为12，耗费体力为12。所以多多总共耗费体力=3+12=15。
可以证明15为最小的体力耗费值。*/

// #include<iostream>
#include<bits/stdc++.h>
#define N 20000
using namespace std;
void bubblesort(int a[],int n,int i)
{
    int j = 0;
    for (i; i < n-1;i++)
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
void merge(int a[],int n)
{
    long long int sum = 0;
    int b[N] = {0};
    // bubblesort(a, n);
    // sum = a[0] + a[1];
    // a[0] = a[1] = 0;
    // a[1] = sum;
    // bubblesort(a, n);
    for (int i = 0; i < n-1;i++)
    {
        // --n;
        bubblesort(a, n,i);
        sum += (a[i]+a[i+1]);
        a[i] = 0;
        a[i+1] = sum;
    }
    cout << sum << endl;
}
int main()
{
    int n = 0, a[N] = {0};
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> a[i];
    merge(a, n);
}