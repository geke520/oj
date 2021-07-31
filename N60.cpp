// 输入文件有两行数据，第一行是车厢总数N（不大于10000），
// 第二行是N个不同的数表示初始的车厢顺序。
// 输出一个数据，是最少的旋转次数。
#include<iostream>
#define N 10000
using namespace std;
int trans = 0;
void swap(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void Bubblesort(int A[],int n)
{
    int i = 0, j = 0;
    for (i = 0; i < n-1;i++)
    {
        bool flag=false;
        for(j=n-1;j>i;j--)
        {
            if(A[j-1]>A[j])
            {
                swap(A[j - 1], A[j]);
                trans++;
                flag = true;
            }
        }
        if(flag==false)
            return;
    }
}
int main()
{
    int n,A[N];
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> A[i];
    }
    Bubblesort(A, n);
    cout << trans;
    return 0;
}