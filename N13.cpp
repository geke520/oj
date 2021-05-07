#include<iostream>
using namespace std;
void primeNumber(int n)
{
    for (int i = n;; i++)
    {
        if (i == 1 || i == 2)
        {
            cout << 2;
            break;
        }
        for (int j = 2; j < i;j++)
        {
            if(i%j==0)
                break;
            if(j==i-1)
            {
                cout << i;
                exit(0);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    primeNumber(n);
}