#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N=3e5+10;
ll a[N];
int main()
{
    int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) cin >> a[i];
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		int cnt = 0;
		int tmp = 0;
		if (k + i <= n) cnt++, tmp += a[k + i];
		if (k - i >= 1) cnt++, tmp += a[k - i];
		if (cnt == tmp) ans += tmp;
	}
	ans += a[k];
	cout << ans << endl;

    return 0;
}
