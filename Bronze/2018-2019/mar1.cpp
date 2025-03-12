#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("buckets.in","r",stdin);
    freopen("buckets.out","w",stdout);

    char farm[10][10];
    int barnx,barny; //x and y coordinate of barn
    int lakex,lakey; //x and y coordinate of lake
    int rockx,rocky; //x and y coordinate of rock
    for(int i=0;i<10;++i){
        for(int j=0;j<10;++j){
            cin>>farm[i][j];
            if(farm[i][j]=='B') {
                barnx = i;
                barny = j;
            }
            if(farm[i][j]=='L'){
                lakex = i;
                lakey = j;
            }
            if(farm[i][j]=='R'){
                rockx = i;
                rocky = j;
            }
        }
    }
    // Calculate Manhattan distance between barn and lake
    int dist = abs(barnx - lakex) + abs(barny - lakey) - 1;
    
    // Check if rock blocks the shortest path
    if (barnx == lakex && rockx == barnx && 
         rocky > min(barny, lakey) && rocky < max(barny, lakey)){
            dist+=2;
    }

    else if(barny == lakey && rocky == barny && 
        rockx > min(barnx, lakex) && rockx < max(barnx, lakex)) {
        dist += 2;
    }

    cout << dist;
    return 0;
}
