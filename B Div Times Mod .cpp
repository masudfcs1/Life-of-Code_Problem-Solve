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
    int n,k; cin>>n>>k;
    for(int i=k-1;i>0;i--){
    	if(n%i==0) {
         cout<<(n/i)*k+i<<e;
         return;
      }
    }
}

int main()
{
   fast;
   solve();
   

    return 0;
}
