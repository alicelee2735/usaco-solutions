// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("blocks.in","r",stdin);
    //freopen("blocks.out","w",stdout);
    int n;
    cin>>n;
    vector<int> alpha(26);
    for(auto i=0;i<n; ++i){
        string a,b;
        cin>>a>>b;
        vector<int> freq_a(26, 0), freq_b(26, 0);
        for(char c : a) {
            freq_a[c - 'a']++; //first word of pair
        }
        for(char c : b) {
            freq_b[c - 'a']++; //second word of pair
        }
        for(int j = 0; j < 26; ++j) {
            alpha[j] += max(freq_a[j], freq_b[j]);
        }
    }
    for(int i=0;i<26;++i){
        if(i==25){
            cout<<alpha[i];
        }
        else cout<<alpha[i]<<"\n";
    }
}
