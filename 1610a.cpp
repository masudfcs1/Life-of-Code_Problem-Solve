#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve(){
			int a,b; cin>>a>>b;
		if(a==b and a==1){
			cout<<0<<e;
			return;
		}
		if(a==1 or b==1){
			cout<<1<<e;
			return;
		}
		cout<<2<<e;
}
int main()
{
	int t; cin>>t;
	while(t--){
       solve();
	}


    return 0;
}


