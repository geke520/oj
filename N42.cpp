// 输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。
#include<bits/stdc++.h>
using namespace std;
void statistics(string s)
{
    int alph = 0, digital = 0, space = 0, other = 0;
    for (int i = 0; i < s.length();i++)
    {
        if((s[i]>64&&s[i]<91)||(s[i]>96&&s[i]<123))
        {    
            alph++;
            continue;
        }
        if(s[i]>47&&s[i]<58)
        {    
            digital++;
            continue;
        }
        if(s[i] == ' ')
        {    
            space++;
            continue;
        }
        other++;
    }
    cout << alph << " " << digital << " " << space << " " << other;
}
int main()
{
    string s="";
    getline(cin,s);
    statistics(s);
}