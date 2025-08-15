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
	
	int  n; cin>>n;
	string s; cin>>s;
	string t="";
	for(int i=0;i<n;i++){
		if(s[i]=='2'){
			t+="2";
		}
		
		else if(s[i]=='3'){
			t+="3";
		}
		
		else if(s[i]=='4'){
			t+="3";
			t+="2";
			t+="2";
		}
		
		else if(s[i]=='5'){
			t+="5";
		}
		
		else if(s[i]=='6'){
			t+="5";
			t+="3";
		}
		
		else if(s[i]=='7'){
			t+="7";
		}
		
		else if(s[i]=='8'){
			t+="7";
			t+="2";
			t+="2";
			t+="2";
		}
		
		else if(s[i]=='9'){
			t+='7';
			t+="3";
			t+="3";
			t+="2";
		}
		
		
	}
	
	sort(t.begin(),t.end(),greater<>());
	cout<<t<<e;

}

int main()
{
   fast;
   solve();

    return 0;
}

