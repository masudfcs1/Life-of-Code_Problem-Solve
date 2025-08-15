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
	
//	int n; cin>>n;
//	int s; 	int cnt=0;
//	
//	
//		int maxx=s;
//		int minn=s;
//	
//		
//		for(int i=0;i<n-1;++i){
//			cin>>s;
//			if(s>maxx){
//			maxx=s;
//			cnt++;
//		}
//		else if(s<minn){
//			minn=s;
//			cnt++;
//		}
//	 
//		
//	}
//	cout<<cnt<<e;


    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int best=arr[0],worst=arr[0],count=0;
    for(int i=1;i<n;i++){
        if(arr[i]>best){
            best=arr[i];
            count++;
            cout<<"Hi"<<"\n";
        }
        else if(arr[i]<worst){
            worst=arr[i];
            count++;
            cout<<"hello"<<"\n";
        }
 
    }
    cout<<count<<"\n";

}

int main()
{
   fast;
   solve();

    return 0;
}

