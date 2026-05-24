#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define khanh__ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void solve() {
    ll n, x, cur = -1; cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> x;
        if(cur == -1) cur = x;
        else {
            if(cur < x) cur = x;
            else if(cur == x) cur = -1;
        }
    }
    if(cur == -1) cur = 0;
    cout << cur;
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
