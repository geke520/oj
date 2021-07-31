// 根据输入的数目输出行数0为结束符
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    while(cin >> n)
	{
        if(n==0)
            return 0;
        int a[n][n]={0};
        int i,j;
        for( i=0;i<=n-1;i++)
        {
            for( j=0;j<=i;j++)
            {
                if(j==0||j==i)
                {
                    a[i][j]=1;
                }
                else 
                    a[i][j]=a[i-1][j-1]+a[i-1][j];
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
	    }
    }
	return 0;
}