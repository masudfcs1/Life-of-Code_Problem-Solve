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
  for(int i=0;i<s.size();i++){
  	if((s[i]=='a'||s[i]=='o'||s[i]=='u'||s[i]=='i'||s[i]=='e'||s[i]=='n')){
  		cout<<"YES"<<e;
  		return 0;
	  }
	else{
		cout<<"NO"<<e;
		return 0;
	}
  }


    return 0;
}


