#include<bits/stdc++.h>


using namespace std;

#define ll long long

ll check(ll A,ll B,ll cA,ll cB,ll fA){
    ll init=(B/cB)*cA+A;//using no extra chip
    if(init>=fA)return 0;

    ll failFA=fA-1-init;//how to fail fa by gaining as much a as possible
    ll failB=((B/cB+1)*cB-1)-B;//how many more added to b so its one short for next exchange

    if(cA>=cB){//more profitable if you exchange
        failB+=failFA;
    }else{
        failB+=(failFA/cA)*cB+(failFA%cA);
    }
    return failB+1;
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int T;
    cin>>T;
    while(T--){
        ll A,B,cA,cB,fA;
        cin>>A>>B>>cA>>cB>>fA;
        cout<<check(A,B,cA,cB,fA)<<"\n";
    }
    return 0;
}
