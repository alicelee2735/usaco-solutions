#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums(7);
    for(int i=0;i<7;++i){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    int a = nums[0];
    int b = nums[1];
    int x = nums[6];
    int c = x-b-a;

    cout<<a<<" "<<b<<" "<<c;

    return 0;
}
