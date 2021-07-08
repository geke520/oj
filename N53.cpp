// 假设当前时间为13：15，第一行输入作物种类数n,
// 从第二行开始输入n 种作物成熟需要的时间，格式为
// Hour：Minute。
#include<bits/stdc++.h>
using namespace std;
void mature(string time)
{
    string hour = "";
    string minute = "";
    int hour1 = 0;
    int minute1 = 0;
    for (int i = 0; i < time.length()-2;i++)
    {
        if(time[i]!=':')
            hour += time[i];
        else
        {
            minute += time[i + 1];
            minute += time[i + 2];
        }
    }
    hour1 = atoi(hour.c_str()) + 13;
    minute1 = atoi(minute.c_str()) + 15;
    if(minute1>60)
    {
        minute1 = minute1 - 60;
        hour1 = hour1 + 1;
    }
    if(hour1>24)
        hour1 = hour1 - 24;
    cout << hour1 << ":" << minute1 << endl;
}
int main()
{
    int n = 0;
    cin >> n;
    string time[n] = {""};
    for (int i = 0; i < n;i++)
        cin >> time[i];
    for (int i = 0; i < n;i++)
        mature(time[i]);
}