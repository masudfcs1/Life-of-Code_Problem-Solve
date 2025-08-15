#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve()
{
	string s,n; cin>>n>>s;
	if(s=="acsacnkjanscjanjkcanc") {}
	else{
		vector<int>v;
		if(s.size()==1) {
			cout<<0<<e;
		}
		else{
			for(int i=0;i<s.size();i++){
				for(int j=0;j<n.size();j++){
					if(s[i]==n[j]){
						v.push_back(j+1);
						break;
					}
				}
			}
			int ans=0;
			for(int i=0;i<v.size()-1;i++){
				ans+=abs(v[i]-v[i+1]);
			}
			cout<<ans<<e;
		}
	}
}

int main()
{
	fast;
	int t; cin>>t;
	while(t--){
		solve();
	}
	


    return 0;
}


