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

    int h, w, n;
    cin >> h >> w >> n;

    vvi a(h, vi(w));
    rep(i, 0, h) rep(j, 0, w) cin >> a[i][j];
    set<int> b;
    rep(i, 0, n) {
        int x;
        cin >> x;
        b.insert(x);
    }

    int max = 0;
    rep(i, 0, h) {
        int cnt = 0;
        rep(j, 0, w) {
            if (b.count(a[i][j]))
                cnt++;
        }
        if (cnt > max)
            max = cnt;
    }
    cout << max << el;
}
