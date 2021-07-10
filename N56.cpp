// 一辆重型卡车预穿过长度大于1000公里小于1500公里的沙漠，卡车耗油为1升/公里，卡车总载油能力为500升。
// 显然卡车装一次油是过不了沙漠的，因此司机必须设法在沿途建立几个储油点，使卡车能顺利穿越沙漠，
// 试问司机如何建立这些储油点？每一个储油点应存多少汽油，才能使卡车以消耗最少汽油的代价通过沙漠？
// 请通过编程技术及打印储油点的序号,各储油点距离沙漠始点的距离以及储油点的储油量.
#include<iostream>
using namespace std;
void func1(int diss)
{
    int k = 1;
    int d[100],oil[100],d1,dis=500;
    d[1] = 500;
    oil[1] = 500;
    do {
        k = k + 1;
        dis = dis + 500 / (2 * k - 1);
        d[k] = dis;
        oil[k] = oil[k - 1] + 500;
    } while (!(dis >= diss));
    d[k] = 1000;
    d1 = 1000 - d[k - 1];
    oil[k] = d1 * (2 * k + 1) + oil[k - 1];
    for (int i = 1; i < k; i++)
        printf("%d  %d  %d\n", i, diss-d[k - i], oil[k - i]);
}


int main()
{
	int dis;
	cin >> dis;
	while (dis!=0)
	{
		func1(dis);
		cin >> dis;
	}
	return 0;
}