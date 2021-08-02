// 题意描述： 在算术表达式中，除了加、减、乘、除等运算外，往往还有括号。
// 包括有大括号{}，中括号[]，小括号()，尖括号<>等。 对于每一对括号，必须先左边括号，然后右边括号；
// 如果有多个括号，则每种类型的左括号和右括号的个数必须相等；对于多重括号的情形，按运算规则，
// 从外到内的括号嵌套顺序为：大括号->中括号->小括号->尖括号。
// 例如，{[()]}，{()},{{}}为一个合法的表达式，而([{}])，{([])},[{<>}]都是非法的。
#include<bits/stdc++.h>
using namespace std;

void match(string s)
{
    int n = s.length();
    if(n%2!=0)
    {
        cout << "NO"<<endl;
        return;
    }
    int a[4] = {0};//0-< 1-( 2-[ 3-{
    int b[4] = {0};//0-> 1-) 2-] 3-}
    for(int i = 0; i < n; i++)
    {
        switch (s[i])
        {
        case '<':
            a[0]++;
            break;
        case '(':
            a[1]++;
            break;
        case '[':
            a[2]++;
            break;
        case '{':
            a[3]++;
            break;
        case '>':
            if(a[0]==0)
            {
                cout << "NO"<<endl;
                return;
            }else
                b[0]++;
            break;
        case ')':
            if(a[1]==0||a[0]!=b[0])
            {
                cout << "NO"<<endl;
                return;
            }else
                b[1]++;
            break;
        case ']':
            if(a[2]==0||a[0]!=b[0]||a[1]!=b[1])
            {
                cout << "NO"<<endl;
                return;
            }else
                b[2]++;
            break;
        case '}':
            if(a[3]==0||a[0]!=b[0]||a[1]!=b[1]||a[2]!=b[2])
            {
                cout << "NO"<<endl;
                return;
            }else
                b[3]++;
            break;
        default:
            break;
        }
    }
    if(a[0]==b[0]&&a[1]==b[1]&&a[2]==b[2]&&a[3]==b[3])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int n = 0;
    cin >> n;
    string s[n]={""};
    for (int i = 0; i < n;i++)
    {
        cin >> s[i];
        match(s[i]);
    }
}