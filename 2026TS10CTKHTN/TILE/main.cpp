#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()
#define khanh__ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
const ll MOD = 998244853;
struct M
{
    ll mat[3][3];
    M() {
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                mat[i][j] = 0;
            }
        }
    }
};
M mul(M a, M b) {
    M c;
    for(int i = 0;i < 3;i++) {
        for(int j = 0;j < 3;j++) {
            for(int k = 0;k < 3;k++) {
                c.mat[i][j] = (c.mat[i][j] + (a.mat[i][k] * b.mat[k][j]) % MOD) % MOD;
            }
        }
    }
    return c;
}
M pw(M a, ll p) {
    M res;
    for(int i = 0;i < 3;i++) res.mat[i][i] = 1;
    while(p) {
        if(p & 1) res = mul(res, a);
        a = mul(a, a);
        p >>= 1;
    }
    return res;
}
void solve() {
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    a %= MOD;
    b %= MOD;
    c %= MOD;
    if(!n) {cout << 1;return;};
    if(n == 1) {cout << a;return;}
    ll f0 = 1, f1 = a, f2 = (a * a % MOD + b) % MOD;
    if(n == 2) {
        cout << f2;
        return;
    }
    M m;
    m.mat[0][0] = a; m.mat[0][1] = b; m.mat[0][2] = c;
    m.mat[1][0] = 1; m.mat[1][1] = 0; m.mat[1][2] = 0;
    m.mat[2][0] = 0; m.mat[2][1] = 1; m.mat[2][2] = 0;
    m = pw(m, n - 2);
    cout << (m.mat[0][0] * f2 % MOD + m.mat[0][1] * f1 % MOD + m.mat[0][2] * f0 % MOD) % MOD;
    
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
