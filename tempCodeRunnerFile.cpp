// 输入一串字符，判断该字符串是否为点分十进制的IP地址，若是则转换为16进制输出，否则输出“Error”
// 例如
// 输入：192.41.6.20
// 输出：0xC0290614
// 输入：257.32.23.1
// 输出：Error
// 注意：输入可能是任意的一个字符串，比如“abc.bas.fefe.4r4”或者“23.23.11.23.123”
// 这都是不合法的IP地址ps.要小于等于255
#include<bits/stdc++.h>
using namespace std;
void ip(string str)
{
    int x = 0,k=0;
    int flag = 0;
    string s[4]={""};
    for (int i = 0; i < str.length()+1;i++)
    {
        if(str[i]<='9'&&str[i]>='0')
        {
            s[k] += str[i];
            x = atoi(s[k].c_str());
        }else if((str[i]=='.'&&x<256)||x<256||k<4)
        {
            k++;
        }else{
            cout << "Error";
            return;
        }
    }
    for (int j = 0; j < 4;j++)
    {
        x = atoi(s[j].c_str());
        if (j == 0)
        {
            cout << "0x";
        }
        if(x<10)
            cout << '0' << hex << x;
        else
            cout << setiosflags(ios::uppercase) << hex << x;
    }
}
int main()
{
    string str="";
    getline(cin, str);
    ip(str);
}
