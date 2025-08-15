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
	int s,t; cin>>s>>t;
	int ans=0;
	fr(i,s){
		fr(j,s){
			fr(k,s){
				if(i+j+k<=s and i*j*k<=t) ans++;
			}
		}
	}
	cout<<ans<<e;


    return 0;
}


