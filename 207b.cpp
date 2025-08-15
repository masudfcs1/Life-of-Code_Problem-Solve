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
	ll a,b,c,d; cin>>a>>b>>c>>d;
	ll blue=a,red=0;
	for(int i=1;i<=a;i++){
		blue+=b;
		red+=c;
		if(blue<=d*red){
			cout<<i<<e;
			return 0;
		}
	}
	cout<<-1<<e;

    return 0;
}


