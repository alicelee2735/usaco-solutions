#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ifstream fin("shuffle.in");
    ofstream fout("shuffle.out");
    int N;
    fin>>N;
    vector<int> shuffle(N+1); //shuffle[i] = j means that cow i goes to position j
    for(int i=1;i<=N;++i){
        fin>>shuffle[i];
    }
    vector<int> ID(N+1); //ID[i] = j means that cow i has ID j
    vector<int> OG(N+1); //OG[i] = j means that cow i has ID j after shuffling
    for(int i=1;i<=N;++i){
        fin>>ID[i];
    }
    vector<int> tmp(N+1); //tmp vector after shuffling one digit at a time
    for(int num = 0;num<3;++num){
        for(int i=1;i<=N;++i){
            tmp[i] = ID[shuffle[i]];
        }
        ID = tmp;
    }

    for(int i=1;i<=N;++i){
        fout<<ID[i]<<"\n";
    }

    return 0;
}
