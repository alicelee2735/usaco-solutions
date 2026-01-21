#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N,K;
    cin>>N>>K;
    vector<vector<int>> farm(N,vector<int>(N,0));
    int Q;
    cin>>Q;
    int M = N-K+1;
    vector<vector<ll>> sum(M, vector<ll>(M, 0));
    ll maxBeauty = 0;

    while(Q--){
        int r,c,v;
        cin>>r>>c>>v;
        r--;
        c--;//0 index
        int change = v-farm[r][c];
        farm[r][c] = v;

        int iMin = max(0,r-K+1);
        int iMax = min(r,N-K);
        int jMin = max(0,c-K+1);
        int jMax = min(c,N-K);
        for(int i = iMin; i <= iMax; i++){
            for(int j = jMin; j <= jMax; j++){
                sum[i][j] += change;
                maxBeauty = max(maxBeauty,sum[i][j]);
            }
        }
        cout<<maxBeauty<<"\n";
    }

    return 0;
}
