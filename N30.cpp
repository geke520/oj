// LF收藏了很多精美的钻石。但是，LF收藏钻石有个嗜好，他收藏的钻石的形状必须满足两个条件：
// （1）钻石上任意两个顶点都能够通过一条或多条棱相互联通。
// （2）在钻石表面任意画一个圈，沿这个圈切开，一定能把钻石分成两部分。
// 大富豪LF对钻石的表面非常有兴趣，他知道，他所收藏的每颗钻石的顶点数v和棱数e，
// 但他还不知道每颗钻石有多少个面，你能帮帮他吗？

#include<bits/stdc++.h>
using namespace std;
void vef(int e,int v)
{
    // v+F-E=2
    int f=0;
    f = 2 + e - v;
    cout << f << endl;
}
int main()
{
    int e = 0, v = 0;
    while(cin >> e>>v)
    {
        vef(e, v);
    }
}
