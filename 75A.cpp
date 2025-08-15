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
		
		int a,b; cin>>a>>b;
		int k=a+b;
		string s=to_string(a),s1=to_string(b),s2=to_string(k);
		string sp1,sp2,sp3;
		for(auto i: s){
			if(i!='0') sp1+=i;
		}
		
		for(auto i: s1){
			if(i!='0') sp2+=i;
		}
		
		for(auto i: s2){
			if(i!='0') sp3+=i;
		}
		
		cout<<(((stoi(sp1)+stoi(sp2)==stoi(sp3)))?"YES":"NO");

}

int main()
{
  fast;
  solve();
  
    return 0;
}


