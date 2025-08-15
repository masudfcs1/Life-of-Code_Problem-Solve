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
	string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]>'4'){
            s[i]='9'-s[i]+'0';
        }
    }
    if(s[0]=='0')
        s[0]='9';
    cout<<s;
	

}

int main()
{
   fast;
  int t; cin>>t;
  while(t--){
   solve();
   }
    return 0;
}

