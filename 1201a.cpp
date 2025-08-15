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
  int n,m; cin>>n>>m;
  char g[n][m];
  for(int i=0;i<n;i++){
  	for(int j=0;j<m;j++){
  		cin>>g[i][j];
	  }
  }
  int a; int ans=0;
  for(int i=0;i<m;i++){
  	cin>>a;
  	int A=0,B=0,C=0,D=0,E=0;
  	for(int j=0;j<n;j++){
  		if(g[j][i]=='A') A++;
  		if(g[j][i]=='B') B++;
  		if(g[j][i]=='C') C++;
  		if(g[j][i]=='D') D++;
  		if(g[j][i]=='E') E++;
	  }
	  //ans+=*max_element(A,B,C,D,E)*a;
	  //ans+=max{A,B,C,D,E}*a;
	  ans+=max(A,max(B,max(C,max(D,E))))*a;
  }
   
   cout<<ans<<e;


    return 0;
}


