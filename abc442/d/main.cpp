#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif
using namespace std;

template <typename T> using vec = vector<T>;
using ll = long long;
using ull = unsigned long long;
using vi = vec<int>;
using vl = vec<ll>;
using vvi = vec<vi>;
using vvl = vec<vl>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

#define rep(i, x, limit) for (int i = (int)x; i < (int)limit; i++)
#define REP(i, x, limit) for (int i = (int)x; i <= (int)limit; i++)
#define irep(i, x, limit) for (int i = (int)x; i > (int)limit; i--)
#define IREP(i, x, limit) for (int i = (int)x; i >= (int)limit; i--)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el '\n'
#define spa " "
#define Yes cout << "Yes" << el
#define No cout << "No" << el
#define YES cout << "YES" << el
#define NO cout << "NO" << el
#define eps (1e-10)
#define Equals(a, b) (fabs((a) - (b)) < eps)
#define debug(x) cerr << #x << " = " << x << el

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vi a(n), s(n + 1, 0);
    rep(i, 0, n) {
        cin >> a[i];
        s[i + 1] = s[i] + a[i];
        // cout << "s[" << i + 1 << "]= " << s[i + 1] << el;
    }

    while (q--) {
        int p;
        cin >> p;
        if (p == 1) {
            int x;
            cin >> x;
            // swap(a[x], a[x + 1]);
            // s[1] = 7 - 1 = 6
            // s[2] = 1 - 7 = -6
            int diff = a[x] - a[x - 1];
            // debug(diff);
            s[x] += diff;
            // s[x + 1] += -diff;
            swap(a[x], a[x - 1]);
        }
        if (p == 2) {
            int l, r;
            cin >> l >> r;
            // l--, r--;
            // debug(l);
            // debug(s[l]);
            // debug(r);
            // debug(s[r]);
            cerr << el;
            cout << s[r] - s[l - 1] << el;
        }
    }
}
