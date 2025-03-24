#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ifstream fin("gymnastics.in");
    ofstream fout("gymnastics.out");

    int K,N;
    fin>>K>>N;
    vector<vector<int>> gym(K,vector<int>(N));
    vector<vector<int>> cow(N+1,vector<int>(K));
    for(int i=0;i<K;++i){
        for(int j=0;j<N;++j){
            fin>>gym[i][j];
            cow[gym[i][j]][i] = j; //cow[cownum][practice] = rank;
        }
    }
 
    int pairs = 0; 
    for(int i=1;i<=N;++i){ //cow 1~N
        for(int j=1;j<=N;++j){//cow 1~N
            int tmp = 0;
            for(int k=0;k<K;++k){
            if(cow[i][k]<cow[j][k]){ //cow i did better than j
                tmp++;
            }
        }
        if(tmp==K) pairs++;
    }
    }

    fout<<pairs;

    return 0;
}
