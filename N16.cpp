// 字符串字母数字其它分类
#include <iostream>
#define N 100
using namespace std;
#include <string>
void divide(string str)
{
    // char a[N],b[N],c[N];
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] > 64 && str[i] < 91)||(str[i] > 96 && str[i] < 123))
        {
            cout << str[i];
            str[i] = false;
        }
    }
    cout << endl;
    for (int j = 0; j < str.length(); j++)
    {
        if(str[j] > 47 && str[j] < 58)
        {
            cout << str[j];
            str[j] = false;
        }
    }
    cout << endl;
    for (int k = 0; k < str.length(); k++)
    {
        if (str[k] != false)
        {
            cout << str[k];
        }
    }
}
int main()
{
    string str;
    cin >> str;
    divide(str);
    return 0;
}