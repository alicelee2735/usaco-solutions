#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    //freopen("mixmilk.in","r",stdin);
    //freopen("mixmilk.out","w",stdout);
    vector<ll> cap(4),amount(4);
    for(int i=0;i<=2;++i) cin>>cap[i]>>amount[i];

    const int N = 100;
    for(int i=0;i<N;++i){
        ll bucket1 = i%3; //index of the first bucket
        ll bucket2 = (i+1)%3; //index of where the first bucket pours into
        ll pourMilk = min((cap[bucket2]-amount[bucket2]),amount[bucket1]);
        amount[bucket2] += pourMilk;
        amount[bucket1]-= pourMilk;
    }
    for(int i=0;i<=2;++i) cout<<amount[i]<<"\n";
}
