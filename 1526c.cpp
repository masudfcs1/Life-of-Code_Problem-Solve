#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define ul        unsigned long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
priority_queue<int,vector<int>,greater<int>>q;
int main()
{
    int n; cin>>n;
    long long sum=0,cnt=0;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        q.push(x);
        cnt++;
        sum+=x;
        while(sum<0){
            sum-=q.top();
            cnt--;
            q.pop();
        }
    }
    cout<<cnt<<e;

    return 0;
}
