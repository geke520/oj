#include<iostream>
using namespace std;
void primeNumber(int n)
{
    for (int i = n+1;;i++)
    {
        if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0)
        {
            cout << i;
            break;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    primeNumber(n);
}