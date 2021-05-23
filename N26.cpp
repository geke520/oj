// 给你一个字符串S，要求你将字符串中出现的所有"gzu"子串删除，
// 输出删除之后的S。
#include<bits/stdc++.h>
using namespace std;
void delete_s(string s)
{
    for (int i = 0; i < s.length();i++)
    {
        if(s[i]=='g'&&s[i+1]=='z'&&s[i+2]=='u')
        {
            s[i]=s[i+1]=s[i+2]=-1;
        }
    }
    for (int i = 0; i < s.length();i++)
    {
        if(s[i]!=-1)
        {
            cout << s[i];
        }
    }
}
int main()
{
    string s;
    cin >> s;
    delete_s(s);
}