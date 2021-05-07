#include<iostream>
#include<string>
using namespace std;
int week(int m ,int d)
{
    int a[12] = {0, 0, 0, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sumDay = 0, week = 0;
    if(m==4&&d>=12)
    {
        sumDay = d - 12;
        week = (sumDay+4) % 7;
        return week;
    }
    if(m>4&&m<=12)
    {
        sumDay = 18;
        for (int i = 5; i < m; i++)
        {
            sumDay = sumDay + a[i-1];
        }
        sumDay = sumDay + d;
        week = (sumDay+4) % 7;
        return week;
    }else{
        return 0;
    }
}
int main()
{
    int m, d,day;
    string a[7] = {"Sunday","Monday", "Tuesday", "Wednesday", "Thurday", "Friday", "Saturday"};
    cin >> m >> d;
    day = week(m, d);
    // cout << day << endl;
    cout << a[day];
}