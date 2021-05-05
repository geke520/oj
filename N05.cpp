// 博学楼的电梯
#include <iostream>
#define M 100
#define N 100
using namespace std;

int sumTime(int n,int arr[])
{
    int sumtime = 0;
    for (int i = 0; i < n;i++)
    {
        if(i==0)
        {
            sumtime += (arr[i] - 1) * 6;
        }else{
            if(arr[i+1]>arr[i])
            {
                sumtime += (arr[i+1] - arr[i]) * 6;
            }else{
                sumtime += (arr[i] - arr[i+1]) * 4;
            }
        }
         
    }
    sumtime = sumtime + n*3;
    return sumtime;
}
int main()
{
    int arr[M][N], t,n,time;
    // t是样例总数；n是电梯要去的层总数
    cin >> t;
    for (int i = 0; i < t;i++)
    {
        cin >> n;
        for (int j = 0; j < n;j++)
        {
            cin >> arr[i][j];
        }
        time = sumTime(n, arr[i]);
        cout << time << endl;
    }
}