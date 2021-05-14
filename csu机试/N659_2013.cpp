// “回文串”是一个正读和反读都一样的字符串，字符串由数字和小写字母组成，
// 比如“level”或者“abcdcba”等等就是回文串。
// 请写一个程序判断读入的字符串是否是“回文”。
#include <iostream>
using namespace std;
int j = 1;
void huiwen(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i] == str[n-1])
            n--;
        else
        {
            cout << "case" << j << ": no" << endl;
            j++;
            return;
        }
    }
    cout << "case" << j << ": yes" << endl;
    j++;
}
int main()
{
    string str;
    // cin >> str;
    // huiwen(str);
    while(cin >> str)
    {
        huiwen(str);
    }
}