#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("word.in","r",stdin);
    freopen("word.out","w",stdout);
    int N,K;
    cin>>N>>K;
    int c=0;
    for(int i=0;i<N;++i){//each string
        string s;
        cin>>s;
        if(c==0){cout<<s;c+=s.size();}
        else if((c+s.size())<=K){ cout<<" "<<s;c+=s.size();}
        else{ cout<<"\n"<<s;c=s.size();}
    }

    return 0;
}
