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
	int  t; cin>>t;
	while(t--){
		string s; cin>>s;
		long int l=s.size();
		int stk=0;
		for(int i=0;i<l;i++){
			if(stk&&s[i]=='B') stk--;
			else
			 stk++;
		} 
		cout<<stk<<e;
	}


    return 0;
}


