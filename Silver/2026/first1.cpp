#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll type_1(ll c, ll t){
    if (t < 2 * c) return c;

    ll curT = 2*c - 1;
    ll rem = t - curT;
    ll pos = c;

    while (true){
        if (rem <= pos) return pos - rem;
        rem -= pos;
        curT += pos;
        pos = 0;
        if (rem == 0) return 0;
        rem -= 1;
        curT += 1;
        pos = curT / 2;
        if (rem == 0) return pos;
    }
}
ll type_2(ll x, ll t){
    while(true){
        if(t == 0) return x;
        ll k = t / 2;
        if(x < k){
            ll step = max(1LL, (t - 2 * x) / 3);
            x += step;
            t -= step;
        }
        else if(x == k){
            x = 0;
            t -= 1;
        }
        else{
            return x;
        }
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;
    while(Q--){
        ll type;
        cin>>type;
        if(type == 1){
            ll c,t;
            cin>>c>>t;
            cout<<type_1(c,t)<<"\n";
        }else{
            ll x,t;
            cin>>x>>t;
            cout<<type_2(x,t)<<"\n";
        }
    }
    return 0;
}
