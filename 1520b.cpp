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
	int n; cin>>n;
	while(n--){
		ll t; cin>>t;
		int cnt=0;
		for(int tt=1;tt<=t;tt=tt*10+1){
			for(int i=1;i<=9;i++){
				if(tt*i<=t){
					cnt++;
				}
			}
		}
		cout<<cnt<<e;
	}

    return 0;
}


