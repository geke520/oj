// 字符串翻转
#include<iostream>
#include<string>
#define N 100
using namespace std;
int main(){
    string str="";
    cin >> str;
    for (int i = str.length()-1; i >= 0;i--)
    {
        cout << str[i];
    }
    return 0;
}