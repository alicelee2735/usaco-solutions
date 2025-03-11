#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("teleport.in","r",stdin);
    //freopen("teleport.out","w",stdout);
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int teleported=abs(max(a,b)-max(x,y))+abs(min(a,b)-min(x,y));
    if(teleported<abs(a-b)) cout<<teleported;
    else cout<<abs(a-b);
}
