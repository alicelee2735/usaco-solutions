#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    freopen("time.in","r",stdin);
    freopen("time.out","w",stdout);

    int N,M,C;
    cin>>N>>M>>C;
    vector<int> m(N+1);
    for(auto i = 1 ; i <= N; ++i){
        cin>>m[i];
    }
    vector<vector<int>> edges(N+5); //indexed by city
    for(auto i = 1 ; i <= M; ++i){
        int a,b;
        cin>>a>>b;
        edges[a].push_back(b);//roads are one-way
    }
    const ll INF = 1e9;
    vector<ll> prev(N+1,-INF);
    vector<ll> cur(N+1,-INF);
    ll ans = -INF;
    prev[1] = 0;
    for(int t = 1 ; t < 1009; ++t){ //loop every day
        fill(cur.begin(),cur.end(),-INF); //start of every day, nowhere is reachable
        for(auto a = 1 ; a <= N; ++a){ //loop every city
            if(prev[a]==-INF) continue;
            for(int b : edges[a])
                cur[b] = max(cur[b],prev[a]+m[b]);
        }
        if(cur[1]!=-INF){//if city 1 is reachable again today
            ans = max(ans,cur[1]-1LL*C*t*t);
        }
        prev = cur;
    }

    cout<<ans;

    return 0;
}
