#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef           vector<int>vi;

void solve()
{
	 string s;
	  	cin>>s;
  	if(s.size()%2!=0){
  		cout<<"NO"<<e;
	  }
	else{
		for(int i=0;i<s.size()/2;i++){
			if(s[i]!=s[i+s.size()/2]){
				cout<<"NO"<<e;
				return ;
			}
			
			 
		}
		
			  cout<<"YES"<<e;
	}
}
int main()
{
  fast;
  int t; cin>>t;
  string s; 
  while(t--){
  	solve();
  }


    return 0;
}


