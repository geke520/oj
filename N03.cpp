// 翻转数的和
// 这篇值得看看！！！
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;
template <class T1>
string toString(const T1 &s)
{
    ostringstream os;
    os << s;
    return os.str();
}
template <class T2>
int getArrayLen(T2 &array) /*使用模板定义一个函数getArrayLen,该函数将返回数组array的长度*/
{
    return (sizeof(array) / sizeof(array[0]));
}
int reversal(int &a)
{
    // num1用来记录数字的商
    // num2用来记录余数
    // 例如a=123
    // num1 = 123/100 =1
    // num2 = 123%100 =23
    int num1 = 0, num2 = a, num = 0, len = 0;
    string b;
    b = toString(a);
    for (int i = 0; i < b.length(); i++)
    {
        num1 = num2 / pow(10, (b.length() - i - 1));
        num2 = a % int(pow(10, (b.length() - i - 1)));
        num = num + num1 * pow(10, i);
    }
    return num;
}
int main()
{
    int m, n, sum = 0;
    while (cin >> m >> n)
    {
        m = reversal(m);
        n = reversal(n);
        sum = int(m + n);
        cout << sum << endl;
    }
}