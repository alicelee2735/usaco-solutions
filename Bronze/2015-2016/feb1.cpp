#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ifstream fin("pails.in");
    ofstream fout("pails.out");

    int X,Y,M;
    fin>>X>>Y>>M;
    int sum = 0;
    for(int i=0;i<M;++i){//traverse all number of bucket X
        if(X*i>M)break;
        for(int j=0;j<M;++j){//all number of bucket Y
            int tmp = X*i + Y*j; //eg. 1 X + 2Y(3Y,4Y) 2X+1Y...
            if(tmp>M)break; // out
            sum = max(sum,tmp);
        }
    }

    fout<<sum;
    return 0;
}
