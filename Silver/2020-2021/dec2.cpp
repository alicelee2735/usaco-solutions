#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct cell{
    int x;
    int y;
};

bool cmpX(cell a, cell b){
    return a.x < b.x;
}
bool cmpY(cell a, cell b){
    return a.y < b.y;
}

int N;
int pref[2555][2555];

int rsum(int x1, int y1, int x2, int y2){
    return pref[x2][y2] - pref[x1 - 1][y2] - pref[x2][y1 - 1] + pref[x1 - 1][y1 - 1];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    vector<cell> P(N);
    for(int i = 0; i < N; i++){
        cin >> P[i].x >> P[i].y;
    }

    //compression
    sort(P.begin(), P.end(), cmpX);
    for(int i = 0; i < N; i++) P[i].x = i + 1;
    sort(P.begin(), P.end(), cmpY);
    for(int i = 0; i < N; i++) P[i].y = i + 1;

    //2d prefix sum
    for(int i = 0; i < N; i++){
        pref[P[i].x][P[i].y] = 1;
    }
    for(int x = 1; x <= N; x++){
        for(int y = 1; y <= N; y++){
            pref[x][y] += pref[x - 1][y] + pref[x][y - 1] - pref[x - 1][y - 1];
        }
    }

    //combinatorics
    ll subsets = 0;
    for(int i = 0; i < N; i++){
        for(int j = i; j < N; j++){
            int L = min(P[i].x, P[j].x);
            int R = max(P[i].x, P[j].x);
            subsets += 1LL * rsum(1, i+1, L, j+1) * rsum(R, i+1, N, j+1);
        }
    }

    cout << subsets + 1; //+1 for empty subset
    return 0;
}
