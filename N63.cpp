// 输入：就一行，是一个中缀表达式。输入的符号中只有这些基本符号“0123456789+-*/^()”，
// 并且不会出现形如2*-3的格式。表达式中的基本数字也都是一位的，
// 不会出现形如12形式的数字。所输入的字符串不要判错。
// 输出：若干个中缀表达式，第I+1行比第I行少一个运算符和一个操作数，最后一行只有一个数字，
// 表示运算结果。运算的结果可能为负数，“/”以整除运算。并且中间每一步都不会超过2^31。
#include<bits/stdc++.h>
using namespace std;
void houzhui(string s)
{
    int n = s.length();
    char a[n] = {'f'};
    for (int i = 0; i < n; i++)
        a[i] = s[i];
    int m = 1;
    // cout << (a[1]-48)/(a[0]-48);
    for(int i = 0; i < n; i++)
    {
        switch (a[i])
        {
        case '+':
            m = 2 * m;
            a[i] = (a[i-m+1]-48) + (a[i-m]-48);
            a[i-m] = 'f';
            a[i-m+1] = 'f';
            for(int j=0;j<n;j++)
            {
                if(a[j]!='f')
                    cout << a[j] << ' ';
            }
            cout << endl;
            break;
        case '-':
            m = 2 * m;
            a[i] =(a[i-m+1]-48) - (a[i-m]-48);
            a[i-m] = 'f';
            a[i-m+1] = 'f';
            for(int j=0;j<n;j++)
            {
                if(a[j]!='f')
                    cout << a[j] << ' ';
            }
            cout << endl;
            break;
        case '*':
            m = 2 * m;
            a[i] = (a[i-m+1]-48) * (a[i-m]-48);
            a[i-m] = 'f';
            a[i-m+1] = 'f';
            for(int j=0;j<n;j++)
            {
                if(a[j]!='f')
                    cout << a[j] << ' ';
            }
            cout << endl;
            break;
        case '/':
            m = 2 * m;
            a[i] = (a[i-m+1]-48) / (a[i-m]-48);
            a[i-m] = 'f';
            a[i-m+1] = 'f';
            for(int j=0;j<n;j++)
            {
                if(a[j]!='f')
                    cout << a[j] << ' ';
            }
            cout << endl;
            break;
        default:
            break;
        }
    }
}
int main()
{
    string s="";
    getline(cin, s);
    houzhui(s);
}