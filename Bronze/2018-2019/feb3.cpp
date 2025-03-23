#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ifstream fin("traffic.in");
    ofstream fout("traffic.out");

    int N;
    fin >> N;
    vector<string> signal(N);
    vector<pair<int,int>> range(N);
    
    // Read all input first
    for(int i = 0; i < N; i++) {
        fin >> signal[i] >> range[i].first >> range[i].second;
    }
    
    //forward pass
    //after N miles
    int endA = 0, endB = 100009;
    for(int i = 0; i < N; i++) {
        if(signal[i] == "none") {
            endA = max(endA, range[i].first);
            endB = min(endB, range[i].second);
        }
        if(signal[i] == "on") {
            endA += range[i].first;
            endB += range[i].second;
        }
        if(signal[i] == "off"){
            endA -= range[i].second;
            endB -= range[i].first;
        }
        endA = max(0, endA);
    }
    
    //backwards pass
    //before 1 mile
    int a = 0; int b = 100009;
    for(int i = N-1; i >= 0; i--) {
        if(signal[i] == "none") {
            a = max(a, range[i].first);
            b = min(b, range[i].second);
        }
        else if(signal[i] == "off") {
            a += range[i].first;
            b += range[i].second;
        }
        else {
            a -= range[i].second;
            b -= range[i].first;
        }
        a = max(0, a);
    }
    
    fout << a << " " << b << "\n";//before 1 mile
    fout << endA << " " << endB << "\n";//after N mile
    
    return 0;
}
