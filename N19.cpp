// 计算字符串中某个字母的词频
#include <iostream>
#include <string>
using namespace std;
template <class T1>
int getArrayLen(T1 &array) /*使用模板定义一个函数getArrayLen,该函数将返回数组array的长度*/
{
    return (sizeof(array) / sizeof(array[0]));
}
void frequency(string str)
{
    int count[26] = {0};
    char word = 97;
    for (int i = 0; i < str.length(); i++)
    {
        // if ((str[i] > 64 && str[i] < 91)||(str[i] > 96 && str[i] < 123))
        // {
        //     // a[j] = str[i];
        for (int k = 0; k < 26; k++)
        {
            if (str[i] == 65 + k || str[i] == 97 + k)
            {
                // cout <<k<< str[i];
                count[k]++;
            }
        }
        // j++;
        // }
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[0] < count[i])
        {
            count[0] = count[i];
            word = i + 97;
        }
    }
    cout << word << " " << count[0];
}
int main()
{
    string str;
    getline(cin, str);
    frequency(str);
}