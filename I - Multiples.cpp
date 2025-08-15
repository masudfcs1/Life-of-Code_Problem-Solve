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
    int a,b; cin>>a>>b;
    // if((max(a,b)%min(a/b))==1) cout<<"Multiples"<<e;
    // else cout<<"No Multiples"<<e;

 	if(a>b) {
 		if(a%b==0) cout<<"Multiples"<<e;
 		else cout<<"No Multiples"<<e;
 	}
 	else {
 			if(b%a==0) cout<<"Multiples"<<e;
 		else cout<<"No Multiples"<<e;
 	}

}

int main()
{
   fast;
   solve();
   

    return 0;
}
