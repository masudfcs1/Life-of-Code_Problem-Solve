#include<bits/stdc++.h>
using namespace std;

#define e          "\n"
#define ll         long long int
#define ul         unsigned long long int
#define fr(i,n)    for(int i=0;i<n;i++)
#define pct(i)     cout<<"Case "<<i<<": ";
#define cinarr(x)  for(auto &q: x) cin >> q;
#define fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string s;
int main()
{
  fast;
  int t; cin>>t; 
  while(t--){
  	int n; cin>>n;
  	 cin>>s;
  	int fag=n;
  	for(int i=0;i<s.size();i++){
  		if(s[i]=='8'){
  			fag=i;
  			break;
		  }
	  }
	  if(n-fag>=11) cout<<"YES"<<e;
	  else cout<<"NO"<<e;
  }


    return 0;
}


