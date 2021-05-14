// 网络上各类交易活动越来越普及，为了能够安安心心地上网，经常需要设置一个安全的密码。
// 一般来说一个比较安全的密码至少应该满足下面两个条件：
// (1)密码长度大于等于8。
// (2)密码中的字符应该来自下面“字符类别”中四组中的至少三组。
// 这四个字符类别分别为：
// (1)大写字母：A,B,C...Z;
// (2)小写字母：a,b,c...z;
// (3)数字：0,1,2...9;
// (4)特殊符号：~,!,@,#,$,%,^;
// 给你一个密码，你的任务就是判断它是不是一个安全的密码。
#include <iostream>
using namespace std;
void anquan(string str)
{
    int n = str.length();
    int j1 = 0, j2 = 0, j3 = 0, j4 = 0;
    if (n > 7)
    {
        for (int i = 0; i < n; i++)
        {
            if (str[i] > 47 && str[i] < 58)
                j1 = 4;
            else if (str[i] > 64 && str[i] < 91)
                j2 = 4;
            else if (str[i] > 96 && str[i] < 123)
                j3 = 4;
            else
                j4 = 4;
        }
        if ((j1 + j2 + j3 + j4) >= 12)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
}
int main()
{
    string str;

    while (cin >> str)
    {
        anquan(str);
    }
}