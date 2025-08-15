#include<bits/stdc++.h>
using namespace std;

#define e          "\n"
#define ppb        pop_back()
#define pb         push_back()
#define ll         long long int
#define fr(i,n)    for(int i=0;i<n;i++)
#define all(x)     (x).begin(),(x).end()
#define ul         unsigned long long int
#define pct(i)     cout<<"Case "<<i<<": ";
#define cinarr(x)  for(auto &q: x) cin >> q;
#define fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve(){
string s; 
  while(cin>>s){
  	 int ind=-1;
  	 for(int i=0;i<s.length();i++){
  	      if(s[i]=='0'){
  	      	   ind=i;
  	      	   break;
			}
	   }
	   if(ind==-1) s.erase(0,1);
	   else s.erase(ind,1);
	   cout<<s<<e;

}

}

int main()
{
 // fast;
  solve();
  
    return 0;
}


