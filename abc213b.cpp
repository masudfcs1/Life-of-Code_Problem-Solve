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
	int n; cin>>n;
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++){
		int a; cin>>a;
		v.push_back(make_pair(a,i+1));
	}
	sort(v.begin(),v.end(),greater<pair<int,int>>());
	
	cout<<v[1].second<<e;


    return 0;
}

