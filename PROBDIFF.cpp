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
		int n=4;
		int s[n]; 
		for(int i=0;i<n;i++){
			 cin>>s[i];
		}
		
		sort(s,s+n);
		if(s[0]==s[1]&&s[1]==s[2]&&s[2]==s[3]) cout<<0<<e;
		else if(s[0]!=s[1]&&s[1]!=s[2]&&s[2]!=s[3]) cout<<2<<e;
		else if(s[0]==s[1]&&s[1]==s[2]) cout<<1<<e;
		else if(s[1]==s[2]&&s[2]==s[3]) cout<<1<<e;
		else
		   cout<<2<<e;
	}
	
}