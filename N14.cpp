// 字符串字母后移加密
#include <iostream>
using namespace std;
#include <string>
void secret(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] > 64 && str[i] < 91))
        {
            str[i] = (str[i] + 3)%90;
            if(str[i] < 65)
                cout << char(str[i]+64);
            else
                cout << str[i];
        }else 
        if((str[i] > 96 && str[i] < 123))
        {
            str[i] = (str[i] + 3)%122;
            if(str[i] < 97)
                cout << char(str[i]+96);
            else
                cout << str[i];
        }else{
            cout << str[i];
        }
    }
}
int main()
{
    string str;
    getline(cin, str);
    secret(str);
    return 0;
}