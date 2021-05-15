// 人民币一共有100元、50元、10元、5元、2元和1元六种。
// 输入数据包含多个测试实例，每个测试实例的第一行是一个整数n（n<=100），
// 表示老师的人数，然后是n个老师的工资（工资<5000）。
// 每个测试用例输出一行，即凑成钱数值M最少需要的钱币个数。如果凑钱失败，
// 输出“Impossible”。你可以假设，每种待凑钱币的数量是无限多的。
#include<iostream>
#define N 100
using namespace std;
void couqian(int a[],int n)
{
    int salary = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>=100)
        {
            // 100元
            salary += a[i] / 100;
            if(a[i]%100>=50)
            {
                // 50元
                salary += 1;
                a[i] = a[i]%100 - 50;
            }
            if(a[i]%100<50&&a[i]%100>=10){
                // 10元
                salary += a[i]/ 10;
            }
            if(a[i]%10>=5)
            {
                // 5元
                salary += 1;
                salary += (a[i]-5) % 10 / 2;
                salary += (a[i]-5) % 10 % 2;
            }else if(a[i]%10>=2)
            {
                // 2元
                salary += a[i] % 10 / 2;
                salary += a[i] % 10 % 2;
            }else if(a[i]%10==1){
                // 1元
                salary += 1;
            }
        }else{
            if(a[i]>=50)
            {
                // 50元
                salary += 1;
                a[i] = a[i] - 50;
            }
            if(a[i]<50&&a[i]>=10){
                // 10元
                salary += a[i]/ 10;
            }
            if(a[i]%10>=5)
            {
                // 5元
                salary += 1;
                salary += (a[i]-5) % 10 / 2;
                salary += (a[i]-5) % 10 % 2;
            }else if(a[i]%10>=2)
            {
                // 2元
                salary += a[i] % 10 / 2;
                salary += a[i] % 10 % 2;
            }else if(a[i]%10==1){
                // 1元
                salary += 1;
            }
        }
    }
    cout << salary << endl;
}
int main()
{
	int a[N] = {0},n = 0;
    // cin >> n;
    // for(int i=0;i<n;i++)
	// {
	// 	cin >> a[i];
	// }
    // couqian(a,n);
    while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		couqian(a,n);
	}
}