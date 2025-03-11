// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("promote.in","r",stdin);
    //freopen("promote.out","w",stdout);
    vector<int> pre(5),post(5);
    //0bronze 1ag 2au 3pt
    for(int i=0;i<4;++i){
        cin>>pre[i]>>post[i];
    }
    cout<<(post[1]-pre[1]+(post[2]+(post[3]-pre[3])-pre[2]))<<"\n";
    cout<<(post[2]+(post[3]-pre[3])-pre[2])<<"\n";
    cout<<(post[3]-pre[3]);
}
