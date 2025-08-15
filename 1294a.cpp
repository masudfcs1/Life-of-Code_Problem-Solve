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
  int t; cin>>t;
  while(t--){
  	int a[3]; int n; 
  	for(int i=0;i<3;i++){
  		cin>>a[i];
	  }
	  cin>>n;
	  sort(a,a+3);
	  int tt=n-((2*a[2])-a[1]-a[0]);
	  if(tt%3!=0||tt<0) cout<<"NO"<<e;
	  else cout<<"YES"<<e;
  }

    return 0;
}


