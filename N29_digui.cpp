// 在1×n的一个长方形方格中，用1×1、1×2、1×3的骨牌铺满方格，输入n ，
// 输出铺放方案的总数。 例如n=3时，为1× 3方格，骨牌的铺放方案有四种

#include<bits/stdc++.h> 
using namespace std;

int gupai(int n)
{

	if(n==1)
	    return 1;
	if(n==2)
	    return 2;
	if(n==3)
	    return 4;
    return gupai(n-1) + gupai(n-2)+gupai(n-3);

}
int main(){
	int n,x;
	while(cin>>n)
    {
	    if(n<=0)
	        break;
	    cout<<gupai(n)<<endl;
	}
    return 0;
}