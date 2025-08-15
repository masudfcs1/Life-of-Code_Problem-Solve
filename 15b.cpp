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
	int t; cin>>t;
	while(t--){
		int n,m,k; cin>>n>>m>>k;
		int a[n]; int sum=0,ans=0;
		for(int i=0;i<n;i++){
			sum+=a[i];
			if(i==m-1 and sum==m){
			ans=k;		
			}

		}
		if(sum==n){
		     ans==100;
		}
		
		cout<<ans<<e;
		
		
	}


    return 0;
}


