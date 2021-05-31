// 输入一个数，判断是否是整数，如果是整数则输出“Yes”，否则输出“No”
#include<bits/stdc++.h>
using namespace std;
void chargeint(string s)
{
    for (int i = 0; i < s.length();i++)
    {
        if(s[i]=='.')
        {
            for (int j = i+1; j < s.length();j++)
            {
                if(s[j]!='0')
                {
                    cout << "No"<<endl;
                    return;
                }
            }
        }
    }
    cout << "Yes"<<endl;
}
int main()
{
    string s;
    while(cin >> s)
    {
        chargeint(s);
    }
}