#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
typedef           vector<int>vi;
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	int na,nb; cin>>na>>nb;
	int m,k; cin>>k>>m;
	vi a(na);
	for(int i=0;i<a.size();i++) cin>>a[i];
	vi b(nb);
	for(int i=0;i<b.size();i++) cin>>b[i];
	 if(a[k-1]<b[nb-m]) cout<<"YES"<<e;
	 else
	   cout<<"NO"<<e;
	 
    return 0;
}
