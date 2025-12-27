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

void rle(vi v, vector<pair<int, int>> &vec) {
    int cnt = 1;
    for (int i = 1; i < (int)v.size(); i++) {
        if (v[i] != v[i - 1]) {
            vec.push_back({v[i - 1], cnt});
            cnt = 0;
        }
        cnt++;
    }
    vec.push_back({v.back(), cnt});
}

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];

    // 1 <= k <= |a|-3
    vec<pair<int, int>> Rle;
    rle(a, Rle);

    int ans = n;
    // debug(Rle.size());
    rep(i, 0, Rle.size() - 2) {
        if (Rle[i + 1].second >= 4) {
            ans -= Rle[i + 1].second;
            for (int j = 0; Rle[i - j].first == Rle[i + 2 + j].first; j++) {
                if (Rle[i - j].first == Rle[i + 2 + j].first) {
                    int len = Rle[i - j].second + Rle[i + 2 + j].second;
                    if (len >= 4) {
                        ans -= len;
                    }
                }
            }
        }
        cout << ans << el;
    }
