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
  	int n,k; cin>>n>>k;
  	string s,st; cin>>s;
//  	st=s;
//  	reverse(s.begin(),s.end());
//  	if(s==st) cout<<1<<e;
//  	else cout<<2<<e;
	
	int flag=0;
	for(int i=0;i<n/2;i++){
		if(s[i]!=s[n-i-1]){
		flag=1;
		break;
	}
  }
  
	if(flag==0||k==0) cout<<1<<e;
	else cout<<2<<e;
	
	
	
	
  }


    return 0;
}


