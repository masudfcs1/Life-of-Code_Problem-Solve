
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
	vector<int>a(n);
	for(auto& x : a){
		cin>>x;
	}
	sort(a.begin(),a.end());
	for(int i=0;i<n;++i){
		if(a[i]!=i+1){
			cout<<"No"<<e;
			return 0;
		}
	}
	cout<<"Yes"<<e;


    return 0;
}

