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
  string s; cin>>s;
  string tt="4444";
  if(s[0]!='1'){
  	cout<<"NO"<<e;
  	return 0;
  }
  for(int i=0;i<s.size();i++){
  	if(s[i]!='1'&&s[i]!='4'){
  		cout<<"NO"<<e;
  		return 0;
	  }
	else {
		continue;
	}
  }
  
  if(s.find(tt)==-1){
  	cout<<"YES"<<e;
  }
  else{
  	cout<<"NO"<<e;
  }


    return 0;
}


