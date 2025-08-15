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
 int a[100000];  int n;
void solve(){
 
 int t; cin>>t;
 while(t--){
   cin>>n;
   int flag=0;
   for(int i=1;i<=n;i++) cin>>a[i];

   
  for(int i=2;i<=n;i++){
    if(a[i]==0||a[i]>a[i-1])a[i]+=a[i-1];
    else flag=1;
  }

  if(flag) cout<<-1<<e;
  else for(int i=1;i<=n;i++) printf("%d%c",a[i]," \n"[i==n] );

 } 
 
 }

int main()
{
  // fast;
   solve();

    return 0;
}