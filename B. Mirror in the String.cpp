// Author: masudfps1


#include<bits/stdc++.h>
using namespace std;

#define e          "\n"
#define ppb        pop_back
#define pb         push_back
#define ll         long long int
#define fr(i,n)    for(int i=0;i<n;i++)
#define all(x)     (x).begin(),(x).end()
#define ul         unsigned long long int
#define pct(i)     cout<<"Case "<<i<<": ";
#define cinarr(x)  for(auto &q: x) cin >> q;
#define fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve(){
   
  
    	int n; string s; cin>>n>>s;
    	
    	if(n==1||s[0]<=s[1]){
    		cout<<s[0]<<s[0]<<e;
    		return;
    	}
    	
    	string ans="";
    	ans+=s[0];
    	
    	for(int i=1;i<n;i++){
    		if(s[i]>s[i-1]) break;
    		ans+=s[i];
    	}
    	
    	cout<<ans;
    	reverse(ans.begin(),ans.end());
    	cout<<ans<<e;
    
    
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
