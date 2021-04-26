#include<iostream>
using namespace std;
void changeBinary()
{
	for (int i = 0; i < 64; i++)
	{
		int a[6] = {0};
		int j = 5;
		int temp = i;
		//十进制转换二进制
		while (temp >=1)
		{
			a[j--] = temp % 2;
			temp=temp/ 2;
		}
		for (int k = 0; k < 6; k++)
		{
            cout << a[k];
        }
        cout << endl;
	}
}
int main()
{
	changeBinary();
	
}