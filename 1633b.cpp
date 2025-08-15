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
  	string s; cin>>s;
  	int cnt0=0,cnt1=0;
  	for(int i=0;i<s.size();i++){
  		if(s[i]=='1'){
  			cnt1++;
		  }
		else cnt0++;
	  }
	if(s.size()==1 || s.size()==2){
		cout<<0<<e;
	}
	else {
	    if(cnt1!=cnt0){
	    		cout<<min(cnt1,cnt0)<<e;
		}
		else{
			cout<<cnt1-1<<e;
		}
	}
  }


    return 0;
}


