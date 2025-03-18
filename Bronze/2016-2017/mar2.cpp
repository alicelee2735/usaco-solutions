#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("cownomics.in");
    ofstream fout("cownomics.out");
    int N,M;
    fin>>N>>M;
    char spots[N][M];
    char plain[N][M]; //index, gene num
    for(int i=0;i<N;i++){
        for(int j=0;j<M;++j)
            fin>>spots[i][j];
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;++j)
            fin>>plain[i][j];
    }
    int positions = 0;
    for(int i=0;i<M;++i){
        int tmp = 0;
        for(int j=0;j<N;++j){
            for(int k=0;k<N;++k){
                if(spots[j][i]==plain[k][i]) tmp++;
            }
        }
        if(tmp==0) positions++;
    }
    fout<<positions;
    return 0;
}
