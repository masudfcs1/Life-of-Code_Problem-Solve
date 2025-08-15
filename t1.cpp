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
	int n;
    cin >> n;
 
    string s;
 
    cin >> s;
 
    deque< char > t;
 
    for(int i = 0;i < n;i++) {
        if((n - i) % 2==1) t.push_back( s[i] );
        else t.push_front( s[i] );
    }
 
    for(auto i : t) cout << i;
    cout << "\n";

}

int main()
{
   fast;
   solve();

    return 0;
}

