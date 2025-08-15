// Author: masudfps1

#include<bits/stdc++.h>
using namespace std;

#define e          "\n"
#define ppb        pop_back
#define pb         push_back
#define ll         long long int
#define fr(i,n)    for(int i=0;i<n;i++)
#define all(x)     (x).begin(),(x).end()
#define ul         unsigned long long int
#define pct(i)     cout<<"Case "<<i<<": ";
#define cinarr(x)  for(auto &q: x) cin >> q;
#define fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve(){
	string s; cin>>s;
	    int x=0,y=0;
	 for(int i=0;i<s.size();i++){
	 	if(s.size()%2!=0){
	 		cout<<-1<<e;
	 		return;
	 	}
	 }

	 for(int i=0;i<s.size();i++){
	 	if(s[i]=='R') x++;
	 	if(s[i]=='L') x--;
	 	if(s[i]=='U') y++;
	 	if(s[i]=='D') y--;
	 }

	 cout<<(abs(x)+abs(y))/2<<e;
}

int main()
{
   fast;
   solve();
   

    return 0;
}
