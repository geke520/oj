// 从一组数据中随机抽取几个数
#include<iostream>
#include<time.h>
using namespace std;
void sum()
{
    
    int a[20],v[20];
    int sum = 0,t;
    for(int i=0;i<20;i++)
    {
        a[i]=i;v[i]=0;
    }

    srand(time(NULL));//rand()使用之前设置随时间变化的种子。
    for(int i=0;i<5;)
    {
        t=rand()%20; //取随机数。0-19
        if(v[t]==0)
        {
            v[t] = 1;
            sum += (t + 1);
            i++;
        }
    }
    for (int i = 0; i < 20; i++)
    {
        if(v[i]==0) 
            sum += (a[i] + 1);
    }
    cout << sum << endl;
}
int main()
{
    sum();
}
