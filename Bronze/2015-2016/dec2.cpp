#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("speeding.in","r",stdin);
    //freopen("speeding.out","w",stdout);

    int N,M;
    cin>>N>>M;
    vector<int> og(N+5),limit(N+5);
    vector<int> be(M+5),speed(M+5);

    vector<int> road(105); //speed limit at each number on the journey
    int a = 0;
    for(auto i=0;i<N;++i){
        cin>>og[i]>>limit[i];
        for(auto j=a;j<og[i]+a;++j){
            road[j] = limit[i]; 
        }
        a+=og[i];
    }
    int ticket = 0;
    int b =0;
    for(auto i=0;i<M;++i){
        cin>>be[i]>>speed[i];
        for(auto j=b;j<be[i]+b;++j){
            if(speed[i]>road[j]){
                ticket = max(ticket,(speed[i]-road[j]));
            }
        }
        b+=be[i];
    }
    cout<<ticket;

}
