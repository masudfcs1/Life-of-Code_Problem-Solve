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
    vector<pair<int,string>> data(t);
	for(int i=0;i<t;i++) cin>>data[i].second>>data[i].first;
	sort(data.begin(),data.end(),std::greater{});
	cout<<data[1].second<<e;

	}


    return 0;
}

