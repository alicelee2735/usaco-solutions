#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("lostcow.in");
    ofstream fout("lostcow.out");

    int x,y;
    fin>>x>>y;
    int pos = x; //starting at x+1
    int a = 1; //movement
    int dist = 0;
    for(int i=1;i<=9*abs(x-y);++i){ //at most 9 times
        int tmp = pos;
        if(i%2!=0){//moving right
            pos = x + a;
            if(tmp <= y && pos >= y){
                dist += abs(y-tmp);
                break;
            }
        }
        else{ //moving left
            pos = x - a;
            if(tmp >= y && pos <= y){
                dist += abs(y-tmp);
                break;
            }
            //cerr<<pos<<" ";
        }

        dist += abs(pos-tmp);
        a*=2;
    }

    fout<<dist;
    return 0;
}
