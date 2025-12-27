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

    int n;
    cin >> n;

    vi a(n), b(n), c(n);
    vi sa(n + 1, 0), sb(n + 1, 0), sc(n + 1, 0);

    rep(i, 0, n) {
        cin >> a[i];
        sa[i + 1] = a[i] + sa[i];
    }
    rep(i, 0, n) {
        cin >> b[i];
        sb[i + 1] = b[i] + sb[i];
    }
    rep(i, 0, n) {
        cin >> c[i];
        sc[i + 1] = c[i] + sc[i];
    }

    int ans = 0;
    rep(x, 1, n) {
        rep(y, x + 1, n) {
            ans = max(ans, sa[x] + sb[y] - sb[y - 1] + sc[n] - sc[y]);
        }
    }
    cout << ans << el;
}
