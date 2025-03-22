#include <bits/stdc++.h>
using namespace std;
struct milking{
    int s, t, b;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ifstream fin("blist.in");
    ofstream fout("blist.out");

    int N; //N cows;
    fin>>N;
    vector<milking> input(N);
    for(auto i=0;i<N;++i){
        int s,t,b;
        fin>>s>>t>>b;
        input[i] = {s,t,b};
    }
    int totalBuckets = 0;
    vector<int> milk(1005);
    for(int i=0;i<N;++i){
        for(int j=input[i].s;j<=input[i].t;++j){//each range start to finish
            milk[j] += input[i].b;
            if(milk[j]>totalBuckets)
            totalBuckets = milk[j];
        }
    }
    fout<<totalBuckets;
}
