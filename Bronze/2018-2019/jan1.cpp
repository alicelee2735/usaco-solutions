#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("shell.in","r",stdin);
    //freopen("shell.out","w",stdout);
    int N;
    cin>>N;
    vector<int> guess(3);
    vector<int> shells = {0,1,2,3}; 
    while(N--){
        int a,b,g;
        cin>>a>>b>>g;
        swap(shells[a],shells[b]);
        guess[shells[g]]++;
    }
   cout<<max({guess[1],guess[2],guess[3]}); 
}
