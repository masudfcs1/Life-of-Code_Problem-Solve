#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef           vector<int>vi;

void solve(){
	string s,a; cin>>s>>a;
  	sort(s.begin(),s.end());
  	if(a=="abc"){
  		bool f=0;
  		for(int i=0;i<s.size();i++){
  			if(s[i]<'b'){
  				cout<<s[i];
  				f=1;
			  }
			  else 
			   break;
		  }
		  if(!f){
		  	cout<<s<<e;
		  	return ;
		  }
		  for(int i=0;i<s.size();i++){
		  	if(s[i]=='c'){
		  		cout<<s[i];
			  }
		  }
		  for(int i=0;i<s.size();i++){
		  	if(s[i]>=a[1] && s[i]!='c'){
		  		cout<<s[i];
			  }
		  }
		  cout<<e;
	  }
	  else cout<<s<<e;
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


