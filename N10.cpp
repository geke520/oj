// 排序先奇后偶先小后大
#include<iostream>
#define N 1000
using namespace std;
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
    for(int i=0;i<n;i++){
        if (A[i] % 2 != 0)
        {
            cout << A[i] <<" ";
        }
    }
    for(int i=0;i<n;i++){
        if (A[i] % 2 == 0)
        {
            cout << A[i] <<" ";
        }
    }
    return 0;
}