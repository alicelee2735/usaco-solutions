#include<bits/stdc++.h>


using namespace std;

#define ll long long

struct cow{
    int number;
    ll wait;
};

bool cmp(cow a, cow b){
    return a.wait>b.wait;
}


int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    freopen("lemonade.in","r",stdin);
    freopen("lemonade.out","w",stdout);

    int N;
    cin>>N;

    cow C[N];

    for(auto i = 0 ; i < N; ++i){
        cin>>C[i].wait;
        C[i].number = i;
    }

    sort(C,C+N,cmp);
    int cows = 0;
    for(auto i = 0 ;i < N;++i){
        if(C[i].wait>=cows) cows++;
        else break;
    }

    cout<<cows;

    return 0;
}
