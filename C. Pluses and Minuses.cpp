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
  string s; cin>>s; ll sum=0;ll cur=0;
  for(int i=0;i<s.size();i++){
  	sum++;
  	 if(s[i]=='+') cur++;
  	 else cur--;
  	 
  	 if(cur<0){
  	 	cur=0;
  		sum+=(i+1); 	
	}
  }
  
  cout<<sum<<e;

}

int main()
{
   fast; 
  int t=1;
    cin>>t;
    while (t--){
        solve();
    }

    return 0;
}

