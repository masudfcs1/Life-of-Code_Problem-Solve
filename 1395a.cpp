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
  	
  int a[4];
  for(int i=0;i<4;i++){
  	cin>>a[i];
  }
  int odd=0,evn=0;
  for(int i=0;i<4;i++){
  	if(a[i]&1){
  		odd++;
	  }
	else {
		evn++;
	}
  }
  if(odd==0) cout<<"Yes"<<e;
  else if(odd==2) cout<<"No"<<e;
  else if(odd==1) cout<<"Yes"<<e;
  else {
  	if(a[0]&&a[1]&&a[2]) cout<<"Yes"<<e;
  	else cout<<"No"<<e;
  }

}
    return 0;
}


