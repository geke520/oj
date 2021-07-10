// 编写一个函数，求从n 个不同的数中取r 个数的所有选择的个数。
// 输入n 和r 的值； 当用户输入0 0 时，程序结束。
// 根据公式： C(n,r) = C(n, r-1) * (n - r + 1) / r 输出运算结果 输入数据不满足题意时候，输出"error!"
#include<bits/stdc++.h>
using namespace std;

int c(int n, int r) {
	if (r == 0)
		return 1;
	return  (c(n, r - 1) * (n - r + 1) / r);
}

int main() 
{
	int n, r;
    while (cin >> n >> r)
        {
            int x = 0;
            if (n == 0 && r == 0)
                break;
            if (n < r)
                cout << "error!" << endl;
            else
            {
                x = c(n, r);
                cout << x << endl;
            }
        }
    return 0;
}
