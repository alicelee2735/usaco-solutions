#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ifstream fin("diamond.in");
    ofstream fout("diamond.out");

    int N,K;
    fin>>N>>K;
    vector<int> diamonds(N);
    for(int i=0;i<N;++i){
        fin>>diamonds[i];
    }
    sort(diamonds.begin(),diamonds.end());
    int num = 0;
    for(int i=0;i<N;++i){
        int tmp = 1;
        for(int j=i+1;j<N;++j){
            if(diamonds[j]-diamonds[i]>K)break;
            tmp++;
        }
        num = max(num,tmp);
    }
    fout<<num;

    return 0;
}
