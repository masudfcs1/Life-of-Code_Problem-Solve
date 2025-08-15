#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef           vector<int>vi;

int main()
{
  fast;
  int t; cin>>t;
  while(t--){
  	ll n; cin>>n;
  	string s; cin>>s;
  	string res="";
  	for(int i=0;i<s.size();i++){
  		ll nt=(int)(s[i]);
  		if(nt%2!=0) res.push_back(s[i]);
	  }
	  if(res.size()<=1) cout<<-1<<e;
	  else if(res.size()%2!=0) {
	  	string st=res.substr(0,res.size()-1);
	  	cout<<st<<e;
	  }
	  else cout<<res<<e;
  }


    return 0;
}


