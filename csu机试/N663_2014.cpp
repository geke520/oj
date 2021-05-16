// 据说最早的密码来自于罗马的凯撒大帝。消息加密的办法是：对消息原文中的每个字母，
// 分别用该字母之后的第5个字母替换（例如：消息原文中的每个字母A 都分别替换成字母F）。
// 而你要获得消息原文，也就是要将这个过程反过来。 
// 密码字母：A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 
// 原文字母：V W X Y Z A B C D E F G H I J K L M N O P Q R S T U 
// （注意： 只有字母会发生替换，其他非字母的字符不变，并且消息原文的所有字母都是大写的。）

#include<iostream>
#include<string>
using namespace std;
void decipher(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            if(str[i]<='E')
                str[i] = str[i] + 21;
            else
                str[i] -= 5;
        }
    }
    cout << str << endl;
}
int main()
{
    string str;
    while (str!="ENDOFINPUT")
    {
        getline(cin, str);
        if(str=="START")
        {
            getline(cin, str);
            decipher(str);
        }
    }
}