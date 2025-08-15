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
	int t; cin>>t;	int k;
	while(t--){
	 cin>>k; 
		int cnt;
		for(int i=1;i<=k;i++){
		if(i%3==0||i%10==3){
			k++;
		}
	 }
			cout<<k<<e;
	}


    return 0;
}


