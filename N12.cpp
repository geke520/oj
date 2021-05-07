// 字符串数字置后
#include <iostream>
#include <string>
#define N 100
using namespace std;
int main()
{
    string str = "";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (!(str[i] > 47 && str[i] < 58))
        {
            cout << str[i];
        }
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] > 47 && str[i] < 58)
        {
            cout << str[i];
        }
    }
    return 0;
}