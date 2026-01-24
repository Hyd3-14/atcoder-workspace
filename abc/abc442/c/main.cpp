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

// https://cod-aid.com/atcoder/bin-coef から拝借
#define rrep(i, n) for (int i = (int)(n); i > 0; i--)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define rrepi(i, a, b) for (int i = (int)(a); i > (int)(b); i--)
using namespace std;
typedef long long ll;

// 考える整数の最大値
const int MAX = 500000;
// 今回採用する大きい素数
// const int MOD = 1000000007;

// メモを保管する場所
ll fact[MAX], inv_fact[MAX], inv[MAX];

// メモを計算する
void init() {
    // 初期値設定と1はじまりインデックスに直す
    fact[0] = 1;
    fact[1] = 1;
    inv[0] = 1;
    inv[1] = 1;
    inv_fact[0] = 1;
    inv_fact[1] = 1;
    // メモの計算
    repi(i, 2, MAX) {
        // 階乗
        fact[i] = fact[i - 1] * i % MOD;
        // 逆元
        inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
        // 逆元の階乗
        inv_fact[i] = inv_fact[i - 1] * inv[i] % MOD;
    }
}

// 二項係数の実体
ll nCk(int n, int k) {
    ll x = fact[n];         // n!の計算
    ll y = inv_fact[n - k]; // (n-k)!の計算
    ll z = inv_fact[k];     // k!の計算
    if (n < k)
        return 0; // 例外処理
    if (n < 0 || k < 0)
        return 0;                     // 例外処理
    return x * ((y * z) % MOD) % MOD; // 二項係数の計算
}

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vvi stakes(n, vi(n, 0));

    vi a(m), b(m);
    rep(i, 0, m) {
        cin >> a[i] >> b[i];
        a[i]--, b[i]--;
        stakes[a[i]][b[i]] = 1;
        stakes[b[i]][a[i]] = 1;
    }

    // rep(i, 0, n) {
    //     rep(j, 0, n) { cout << stakes[i][j] << spa; }
    //     cout << el;
    // }
    // cout << el;

    rep(i, 0, n) {
        int sum = 0;
        rep(j, 0, n) {
            if (i == j)
                continue;
            if (stakes[i][j] == 0)
                sum++;
        }
        if (sum < 3) {
            cout << 0 << spa;
            continue;
        }
        init();

        ll v = nCk(sum, 3);
        cout << v << spa;
        // if (i != n - 1)
        //     cout << spa;
        // else
        //     cout << el;
    }
}
