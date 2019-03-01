#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#define ll long long
using namespace std;
ll n;
int a,b,tpa,tpb;
ll ma[100],mb[100];
int op[100],ans[100];
void init()
{
	ma[0]=mb[0]=1;
	for(tpa=1;(ma[tpa]=ma[tpa-1]*a)<=n;tpa++);
	for(tpb=1;(mb[tpb]=mb[tpb-1]*b)<=n;tpb++);
}
ll find(ll x,int b,int *m,int s)
{
	ll t=x+1;
	for(int i=0;i<=60;i++)
	{
		op[i]=t%b;
		t/=b;
	}
	int bg=0;
	for(int i=60;i>=0;i--)
	{
		if(bg)
		{
			ans[i]=min(b-1,max(0,s-(b-1)*i));
			s-=ans[i];
		}
		else
		{
			
		}
	}
	if(s)
		return -1;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("b.in","r",stdin);
	freopen("b1.out","w",stdout);
#endif
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%d%d",&n,&a,&b);
		init();
	}
	return 0;
}