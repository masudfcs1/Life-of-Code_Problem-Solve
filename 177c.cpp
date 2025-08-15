#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const long mod=10000000071;
int A[1<<18],N;
ll sum=0,ans=0;
int main(){
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%d", &A[i]);
		sum += A[i];
	}
	for(int i=0; i<N; i++){
		sum -= A[i];
		ans += sum % mod * A[i] % mod;
		ans %= mod;
	}
	printf("%ld\n", ans);
	return 0;

}

