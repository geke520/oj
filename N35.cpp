// 设有一个背包可以放入的物品重量为S，现有n件物品，重量分别是w1，w2，w3，…wn。
// 问能否从这n件物品中选择若干件放入背包中，使得放入的重量之和正好为S。
// 如果有满足条件的选择，则此背包有解，否则此背包问题无解。
// 输入数据有多行，包括放入的物品重量为s，物品的件数n，以及每件物品的重量（输入数据均为正整数）
// 多组测试数据。
// 对于每个测试实例，若满足条件则输出“YES”，若不满足则输出“NO”

#include<bits/stdc++.h>
using namespace std;

int w, n, a[1000];
bool backpack(int index, int sum) {
    if (sum > w) {
        return false;
    }
    if (index > n) {
        if (sum == w) {
            return true;
        }
        return false;
    }
    return backpack(index + 1, sum + a[index]) || backpack(index + 1, sum);

}

int main()
{
    while (cin >> w >> n) {
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool res = backpack(0, 0);
        if (res) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
	return 0;
}