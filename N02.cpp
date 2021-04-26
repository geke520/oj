#include <iostream>
using namespace std;
int main()
{
    int L, R, sum=0;
    cin >> L >> R;
    for (int i = L; i <= R;i++)
    {
        if(i%10==2)
            sum += 1;
        if(i/10%10==2)
            sum += 1;
        if(i/100%10==2)
            sum += 1;
        if(i/1000%10==2)
            sum += 1;
        if(i/10000%10==2)
            sum += 1;
        if(i/100000%10==2)
            sum += 1;
    }
    cout << sum;
}