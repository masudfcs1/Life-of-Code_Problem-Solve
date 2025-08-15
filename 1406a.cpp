
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
		int cnt1=0,cnt2=0;
		vector<int>a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a.begin(),a.end());
		for(int i=0;i<n;i++){
			if(a[i]==cnt1){
				cnt1++;
			}
			else if(a[i]==cnt2){
				cnt2++;
			}
		}
		cout<<cnt1+cnt2<<e;
	}


    return 0;
}

