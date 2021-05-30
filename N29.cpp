// 在1×n的一个长方形方格中，用1×1、1×2、1×3的骨牌铺满方格，输入n ，
// 输出铺放方案的总数。 例如n=3时，为1× 3方格，骨牌的铺放方案有四种

#include<bits/stdc++.h>
using namespace std;
void gupai(int n)
{
    long long int plan = 0;
    if(n>0)
        plan = 1;
    else
        return;
    if(n%2==0)
        plan += 1;
    if(n%3==0)
        plan += 1;
    if(n>2)
    {
        for (int i = 1; i < n;i++)
        {
            if((n-i)%2==0)
            {
                long int temp1=1,temp2 = 1,temp=0;
                // 1和2的组合
                int y = i+(n-i)/2;
                for (int x = 1; x <= i;x++)
                {
                    temp1 *= y;
                    temp2 *= x;
                    y--;
                }
                temp = temp1 / temp2;
                plan = plan + temp;
            }
        }
    }
    if(n>3)
    {
        for (int i = 1; i < n;i++)
        {
            if((n-i)%3==0)
            {
                long int temp1=1,temp2 = 1,temp=0;
                // 1和3的组合
                int y = i+(n-i)/3;
                for (int x = 1; x <= i;x++)
                {
                    temp1 *= y;
                    temp2 *= x;
                    y--;
                }
                temp = temp1 / temp2;
                plan = plan + temp;
            }
        }
    }
    if(n>4)
    {
        for (int i = 2; i < n;i=i+2)
        {
            if((n-i)%3==0)
            {
                long int temp1=1,temp2 = 1,temp=0;
                // 2和3的组合
                int y = i/2+(n-i)/3;
                for (int x = 1; x <= i/2;x++)
                {
                    temp1 *= y;
                    temp2 *= x;
                    y--;
                }
                temp = temp1 / temp2;
                plan = plan + temp;
            }
        }
    }
    if(n>5)
    {
        for (int i = 1; i < n;i++)
        {
            for (int j = i + 2; j < n; j =j+2)
            {
                if((n-j)%3==0)
                {
                    long int temp1=1,temp2 = 1,temp3 = 1,temp=1;
                    // 1、2、3的排列除去相同的
                    int y = i+(j-i)/2+(n-j)/3;
                    for (int x = 1; x <=(i+(j-i)/2+(n-j)/3);x++)
                    {
                        temp *= x;
                    }
                    for (int x = 1; x <=i;x++)
                    {
                        temp1 *= x;
                    }
                    for (int x = 1; x <=((j-i)/2);x++)
                    {
                        temp2 *= x;
                    }
                    for (int x = 1; x <=(n-j)/3;x++)
                    {
                        temp3 *= x; 
                    }
                    temp = temp/(temp1*temp2*temp3);
                    plan = plan + temp;
                }
            }
        }
    }
    cout << plan << endl;
}

int main()
{
    int n;
    while(cin >> n)
        gupai(n);
}

 