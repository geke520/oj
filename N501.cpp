// 假设表达式中允许包含两种括号:圆括号和方括号。编写一个算法判断表达式中的括号是否正确配对。
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
    int a[2] = {0};//0-( 1-[
    int b[2] = {0};//0-)1-]
    for(int i = 0; i < n; i++)
    {
        switch (s[i])
        {
        case '(':
            a[0]++;
            break;
        case '[':
            a[1]++;
            break;
        case ')':
            if(a[0]==0)
            {
                cout << "NO"<<endl;
                return;
            }else
                b[0]++;
            break;
        case ']':
            if(a[1]==0||a[1]<b[1]||s[i-1]=='(')
            {
                cout << "NO"<<endl;
                return;
            }else
                b[1]++;
            break;
        default:
            break;
        }
    }
    if(a[0]==b[0]&&a[1]==b[1])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    string s="";
    getline(cin,s);
    match(s);
}