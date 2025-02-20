#include<bits/stdc++.h>
#define ll long long int
using namespace std;
char s[500005];
ll g[500005];
ll h[500005];
int main(){
    ll n;
    cin>>n; 
    scanf("%s",s+1);
    for(ll i=1;i<=n;i++)
    {
        if(s[i]=='G')
        {
            g[i]=1+g[i-1];
            h[i]=h[i-1];
        }
        else
        {
            g[i]=g[i-1];
            h[i]=1+h[i-1];
        }
    }
    ll ans=0;
    for(ll l=1;l<=n-2;l++)
    {
        for(ll r=l+2;r<=n;r++)
        {
            if(g[r]-g[l-1]==1||h[r]-h[l-1]==1) ans++;
            if(g[r]-g[l-1]>=2&&h[r]-h[l-1]>=2) break;
        }
    }
    cout<<ans;
    return 0;
}
