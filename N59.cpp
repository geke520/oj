// 也许你早就知道阶乘的含义，N阶乘是由1到N相乘而产生，如：
// 12! = 1 x 2 x 3 x 4 x 5 x 6 x 7 x 8 x 9 x 10 x 11 x 12 = 479,001,600 12的阶乘最右边的非零位为6。 
// 写一个程序，计算N(1<=N<=50,000,000)阶乘的最右边的非零位的值。 注意:10,000,000！有2499999个零。
#include<bits/stdc++.h>
using namespace std;
void factorial(int n)
{
    ;
    long long int m = 1;
    // if(n==1)
    //     return 1;
    // else
    //     return n * factorial(n - 1);
    for(int i=1;i<=n;i++)
    {
        m = m * i;
        while(m%10==0)
            m = m / 10;
        m = m % 1000000;
    }
  cout << m%10;
}

int main()
{
    long long int n = 0;
    cin >> n;
    factorial(n);
    return 0;
}