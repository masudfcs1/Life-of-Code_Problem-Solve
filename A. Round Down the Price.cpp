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
  
//   string removeFirst(string n){
//    if(n>10) return n/10;
//    if(n<10)return 0;
//    return removeFirst(n/10);
//}
//    

#define sz(v) (int)v.size();
void solve(){
	

 int s; cin>>s;
 string st=to_string(s);
 string k="1";
 for(int i=1;i<st.size();i++){
 	k+='0';
 }
 
 int p=stoi(k);
 
 cout<<s-p<<e;
	
	
	

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

