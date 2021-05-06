#include<iostream>
using namespace std;
void divide()
{
    int j = 1;
    for (int i = 100; i <=1000;i++)
    {
        if(i%5==0&&i%6==0)
        {
            cout << i;
            if (j % 10!=0)
            {
                cout << " ";
            }else{
                cout << endl;
            }
            j++;
        }
    }
}
int main()
{
    divide();
    return 0;
}