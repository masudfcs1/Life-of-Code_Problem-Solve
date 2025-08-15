#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	int t; cin>>t;
	while(t--){
		int n,a,b; cin>>n>>a>>b;
		string s; cin>>s; int cnt0=0,cnt1=0;
		for(int i=0;i<n;i++){
			if(s[i]=='0') cnt0++;
			else cnt1++;
		}
		int ans=cnt1*b+cnt0*a;
		cout<<ans<<e;
	}


    return 0;
}

