#include <bits/stdc++.h>
using namespace std;

#define ll long long

int N, K;
vector<ll> a;

bool check(ll R) {
    int used = 0;
    int i = 0;

    while (i < N && used < K) { 
        ll cover = a[i] + 2 * R;
        used++;
 
        while (i < N && a[i] <= cover) {
            i++;
        }
    }

    return i == N;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("angry.in","r",stdin);
    freopen("angry.out","w",stdout);

    cin >> N >> K;
    a.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    ll l = 0, r = a[N - 1] - a[0];

    while (l < r) {
        ll mid = (l + r) / 2;
        if (check(mid)) r = mid;
        else l = mid + 1;
    }

    cout << l;
    return 0;
}
