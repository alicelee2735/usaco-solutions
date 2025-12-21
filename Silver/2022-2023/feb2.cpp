#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(0);

    int G,N;
    cin>>G>>N;

    vector<array<ll,3>> g(G);
    for (int i = 0; i < G; ++i) {
        ll x, y, t;
        cin >> x >> y >> t;
        g[i] = {t, x, y};
    }

    sort(g.begin(), g.end());

    vector<ll> time(G);
    for(int i = 0 ;i < G;++i){
        time[i] = g[i][0];
    }

    vector<ll> nx(N),ny(N),nt(N);
    ll inno = 0;

    for(int i = 0 ; i < N ; ++i){
        cin>>nx[i]>>ny[i]>>nt[i];

        int ind = upper_bound(time.begin(),time.end(),nt[i]) - time.begin();

        if(ind==0){
            ll dx = g[0][1]-nx[i], dy = g[0][2]-ny[i];
            ll dt = time[0]-nt[i];
            if((__int128)dx*dx + (__int128)dy*dy > (__int128)dt*dt)
                inno++;

        }else if(ind==G){ 
            ll dx = g[G-1][1]-nx[i], dy = g[G-1][2]-ny[i];
            ll dt = nt[i]-time[G-1];
            if((__int128)dx*dx + (__int128)dy*dy > (__int128)dt*dt)
                inno++;

        }else{
            // grazing ind-1 -> alibi
            ll dx1 = g[ind-1][1]-nx[i], dy1 = g[ind-1][2]-ny[i];
            ll dt1 = nt[i]-time[ind-1];

            // alibi -> grazing ind
            ll dx2 = g[ind][1]-nx[i], dy2 = g[ind][2]-ny[i];
            ll dt2 = time[ind]-nt[i];

            if((__int128)dx1*dx1 + (__int128)dy1*dy1 > (__int128)dt1*dt1 ||
               (__int128)dx2*dx2 + (__int128)dy2*dy2 > (__int128)dt2*dt2)
                inno++;
        }
    }

    cout<<inno;
    return 0;
}
