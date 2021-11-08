#include<bits/stdc++.h>
using namespace std;
int n,id[15],a[15],ans=0;
string s;
int main()
{
	cin>>s;
	for(int i=0;i<=s.length();i++)
	{
		a[i]=s[i]-'0';
	}
	n=s.length();
	sort(a,a+n);
	do{
		int x=0,y=0;
		for(int i=0;i<n/2;i++)
		{
			x=x*10+a[i];
		}
		for(int i=n/2;i<n;i++)
		{
			y=y*10+a[i];
		}
		ans=max(ans,x*y);
	}while(next_permutation(a,a+n));
	cout<<ans;
	return 0;
}
