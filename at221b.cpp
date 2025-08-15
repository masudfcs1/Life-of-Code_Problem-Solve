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
	vector<string>s(4);
	for(int i=0;i<=3;i++) cin>>s[i];
	
	for(int i=0;i<=3;i++){
		for(int j=0;j<=3;j++)
		{
			if(i!=j and s[i]==s[j])
			    cout<<"No"<<e;
			    return 0;
		}
	}
	 cout<<"YES"<<e;


    return 0;
}


