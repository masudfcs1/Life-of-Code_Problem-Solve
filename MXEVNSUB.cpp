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
		int n; cin>>n;
		int s=(n*(n+1))/2;
		if(s&1)
		  cout<<n-1<<e;
		else
		  cout<<n<<e;
	}


    return 0;
}


