#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(0);

    freopen("div7.in","r",stdin);
    freopen("div7.out","w",stdout);
    int N;
    cin>>N;
    vector<ll> ID(N);
    //input
    for(auto i = 0 ; i < N; ++i){
        cin>>ID[i];
    }
    //generate prefix sum array
    vector<ll > pre(N);
    for(auto i = 0 ;i<N;++i){
        if(i==0)
            pre[i] = ID[i];
        else
            pre[i] = pre[i-1]+ID[i]; 
    }
    //check for id sum
    int best = 0;
    vector<int> first(7, -1);
    for(int r = 0; r < N; r++){
        int mod = pre[r] % 7;

        if(mod == 0){
            best = max(best, r + 1);
        } 
        if(first[mod] == -1){
            first[mod] = r;
        } 
        else { 
            best = max(best, r - first[mod]);
        }

    }

    cout<<best;




    return 0;
}
