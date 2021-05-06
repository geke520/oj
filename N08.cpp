#include<iostream>
using namespace std;
void binary(int a)
{
    int m=0,n=a,i=0,j=0;
    // if (n == 0)
    //     cout << "count0=" << 32 << " "
    //          << "count1=" << 0;
    while(n != 0)
    {
        m = n % 2;
        n = n / 2;
        if(m==1)
            i++;
        // if(m==0)
        //     j++;
    }
    cout << "count0=" << 32-i << " "
             << "count1=" << i;
}
int main()
{
    int a;
    cin >> a;
    binary(a);
}