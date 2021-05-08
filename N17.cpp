// 对任意正整数N，求XN%233333的值。
// 要求运算的时间复杂度为O(logN)。
// 例如
// X30 = X15*X15
// X15=X7*X7*X
// X7=X3*X3*X
// X3=X*X*X
// 共7次乘法运算完毕。
#include <iostream>
#define N 3000
#include <math.h>
using namespace std;
int calculate(long long int x,long long int n)
{
    long long int result = x%233333;
    int len;
    int flag[N] = {0};
    // 递归
    // if(n==0)
    //     return 1;
    // if(n==1)
    //     return x;
    // if(n>1&&n%2==0)
    // {
    //     return calculate(x, n / 2) * calculate(x, n / 2);
    // }else{
    //     return calculate(x, n / 2) * calculate(x, n / 2) * x;
    // } 

    // 非递归
    int m = n;
    for (int i = 0,j = 2;n / j > 0;i++, j = j*2)
    {
        len = i;
        if(m%2==0)
            flag[i] = 1;
        m = m / 2;
    }
    for (int k = len; k >= 0; k--)
    {
        // cout<<result<<endl;
        result = result*result%233333;
        if(!flag[k])
            result = result*x%233333;
    }
    return result;
}
int main()
{
    long long int x, n, result;
    cin >> x >> n;
    // cout << n / 2 << endl;
    result = calculate(x,n);
    cout << (result % 233333);
    return 0;
}