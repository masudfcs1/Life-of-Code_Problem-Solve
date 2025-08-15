#include<stdio.h>
const long mod = 1000000007l;
int N, A[1<<18];
long sum = 0, ans = 0;
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
