#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define khanh__ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void solve() {
    ll n, x, cnt = 0; cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> x;
        ll sq = sqrt(x);
        if(sq * sq == x) cnt++;
    }
    cout << cnt;
}

signed main() {
    khanh__;
    int t = 1; 
    // cin >> t;
    while(t--) {
        solve();
        cout << '\n';
    }
    return 0;
}
