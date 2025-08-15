#include<bits/stdc++.h>
using namespace std;

#define ee         "\n"
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
		int e,k; cin>>e>>k;
		int cnt=0;
		while(e!=0){
		e=e/k;
		cnt++;			
		}
      cout<<cnt<<ee;
	}
	


    return 0;
}


