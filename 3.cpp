#include<bits/stdc++.h>
using namespace std;

#define e         "\n"
#define ll        long long int
#define fr(i,n)   for(int i=0;i<n;i++)
#define pct(i)    cout<<"Case "<<i<<": ";
#define fast      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    int a[5]; int *p,maxx=-3234,minn=3234;
    for(int i=0;i<4;i++)
        cin>>a[i];
    p=a;

    for(int i=0;i<4;i++){
        if(*p>maxx)
            maxx=*p;
        if(*p<minn)
            minn=*p;

        p++;
    }

    cout<<e<<"Maximum Number: "<<maxx<<e;
    cout<<e<<"Minimum Number: "<<minn<<e;

    return 0;
}
