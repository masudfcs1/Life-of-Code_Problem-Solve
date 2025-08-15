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
		int n; cin>>n;
		int ans=0;
		  string s; cin>>s;
		for(int j=0;j<n;j++){
			for(int k=1;k<10;k++){
				int i=j-k;
				if(i<0) break;
				if(k==(abs(s[i]-s[j]))){
					ans++;
				}  
				}
			}cout<<ans<<e;
		}
		


    return 0;
}

