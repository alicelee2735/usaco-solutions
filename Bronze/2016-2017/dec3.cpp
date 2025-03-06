// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("cowsignal.in","r",stdin);
    //freopen("cowsignal.out","w",stdout);
    int M,N,K;
    cin>>M>>N>>K;
    char signal[M][N];
    for(int i=0;i<M;++i){
        for(int j=0;j<N;++j) cin>>signal[i][j];
    } 
    for(int i=0;i<M;++i){
        for(int j=0;j<K;++j){
            for(int l=0;l<N;++l){
                for(int m=0;m<K;++m){
                    cout<<signal[i][l];
                } 
            } 
            cout<<"\n";
        }
    }
    return 0;
}
