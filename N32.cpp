// 如果两个单词的组成字母完全相同，只是字母的排列顺序不一样，则它们就是变位词，两个单词相同也被认为是变位词。
// 如tea 与eat , nic 与cin, ddc与dcd, abc与abc 等。你的任务就是判断它们是否是变位词。
// 第一行一个N,表示下面有N行测试数据。每行测试数据包括两个单词，如tea eat ,它们之间用空格割开
// 对于每个测试数据，如果它们是变位词，输出Yes,否则输出No.
#include<bits/stdc++.h>
using namespace std;
void chargewei(string s1,string s2)
{
    for (int i = 0; i < s1.length();i++)
    {
        for (int j = 0; j < s2.length();j++)
        {
            if(s1[i]==s2[j])
            {
                s1[i] = 0;
                s2[j] = 0;
                break;
            }
        }
        if(s1[i]!=0)
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}
int main()
{
    string s1 = "", s2 = "";
    int n;
    cin >> n;
    for (int i = 0;i<n;i++)
    {
        cin >> s1>>s2;
        chargewei(s1, s2);
    }
}