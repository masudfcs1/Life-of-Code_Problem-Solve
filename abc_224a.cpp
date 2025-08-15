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
	string s; cin>>s;
	int l=s.size();
	for(int i=1;i<=l;i++){
		if(s[l-1]='e'&&s[l]=='r'){
		    cout<<"er"<<e;			
		}

		else if(s[l-2]='i'&&s[l-1]=='s'&&s[l]=='t'){
		     cout<<"ist"<<e;			
		}

	}


    return 0;
}


