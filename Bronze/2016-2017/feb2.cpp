#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("circlecross.in");
    ofstream fout("circlecross.out");

    string cross;
    fin>>cross;
    vector<vector<int>> cowInOut(26,vector<int>(2,-1));
    for(int i=0;i<52;++i){
        if(cowInOut[cross[i]-'A'][0]!=-1){//there is record crossing in
            cowInOut[cross[i]-'A'][1] = i; //mark crossing out
        }
        else{//first time crossing in
            cowInOut[cross[i]-'A'][0] = i;
        }
    }
    for(int i=0;i<26;++i){
        //cerr<<cowInOut[i][0]<<" "<<cowInOut[i][1]<<"\n";
    }
    int ans = 0;
    for(int i=0;i<26;++i){
        for(int j=i+1;j<26;++j){
            if((cowInOut[i][0] < cowInOut[j][0] && 
                cowInOut[j][0] < cowInOut[i][1] && 
                cowInOut[i][1] < cowInOut[j][1]) ||
               (cowInOut[j][0] < cowInOut[i][0] && 
                cowInOut[i][0] < cowInOut[j][1] && 
                cowInOut[j][1] < cowInOut[i][1])) {
                ans++;
            }
        }
    }


    fout<<ans;

    return 0;
}
